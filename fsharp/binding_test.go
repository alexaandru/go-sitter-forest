//go:build !plugin

package fsharp_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/fsharp"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `// This sample will guide you through elements of the F# language.

//
// *******************************************************************************************************
//   To execute the code in F# Interactive, highlight a section of code and press Alt-Enter in Windows or
//   Ctrl-Enter Mac, or right-click and select "Send Selection to F# Interactive".
//   You can open the F# Interactive Window from the "View" menu.
// *******************************************************************************************************

// For more about F#, see:
//     http://fsharp.org
//
// For additional templates to use with F#, see the 'Online Templates' in Visual Studio,
//     'New Project' --> 'Online Templates'
//
// For specific F# topics, see:
//     http://fsharp.org (F# Open Organization)
//     http://tryfsharp.org (F# Learning Portal)
//     http://go.microsoft.com/fwlink/?LinkID=234174 (Visual F# Development Portal)
//     http://go.microsoft.com/fwlink/?LinkID=124614 (Visual F# Code Gallery)
//     http://go.microsoft.com/fwlink/?LinkId=235173 (Visual F# Math/Stats Programming)
//     http://go.microsoft.com/fwlink/?LinkId=235176 (Visual F# Charting)
//     http://github.com/ChrisMarinos/FSharpKoans (F# Koans)

// Contents:

//    - Integers and basic functions
//    - Booleans
//    - Strings
//    - Tuples
//    - Lists and list processing
//    - Classes
//    - Generic classes
//    - Implementing interfaces
//    - Arrays
//    - Sequences
//    - Recursive functions
//    - Record types
//    - Union types
//    - Option types
//    - Pattern matching
//    - Units of measure
//    - Parallel array programming
//    - Using events
//    - Database access using type providers
//    - OData access using type providers

// ---------------------------------------------------------------
//         Integers and basic functions
// ---------------------------------------------------------------

module Integers =
    let sampleInteger = 176

    /// Do some arithmetic starting with the first integer
    let sampleInteger2 = (sampleInteger/4 + 5 - 7) * 4

    /// A list of the numbers from 0 to 99
    let sampleNumbers = [ 0 .. 99 ]

    /// A list of all tuples containing all the numbers from 0 to 99 and their squares
    let sampleTableOfSquares = [ for i in 0 .. 99 -> (i, i*i) ]

    // The next line prints a list that includes tuples, using %A for generic printing
    printfn "The table of squares from 0 to 99 is:\n%A" sampleTableOfSquares


module BasicFunctions =

    // Use 'let' to define a function that accepts an integer argument and returns an integer.
    let func1 x = x*x + 3

    // Parenthesis are optional for function arguments
    let func1a (x) = x*x + 3

    /// Apply the function, naming the function return result using 'let'.
    /// The variable type is inferred from the function return type.
    let result1 = func1 4573

    printfn "The result of squaring the integer 4573 and adding 3 is %d" result1

    // When needed, annotate the type of a parameter name using '(argument:type)'
    let func2 (x:int) = 2*x*x - x/5 + 3

    let result2 = func2 (7 + 4)

    printfn "The result of applying the 1st sample function to (7 + 4) is %d" result2

    let func3 x =
        if x < 100.0 then
            2.0*x*x - x/5.0 + 3.0
        else
            2.0*x*x + x/5.0 - 37.0

    let result3 = func3 (6.5 + 4.5)

    printfn "The result of applying the 2nd sample function to (6.5 + 4.5) is %f" result3

// ---------------------------------------------------------------
//         Booleans
// ---------------------------------------------------------------

module SomeBooleanValues =

    let boolean1 = true

    let boolean2 = false

    let boolean3 = not boolean1 && (boolean2 || false)

    printfn "The expression 'not boolean1 && (boolean2 || false)' is %A" boolean3


// ---------------------------------------------------------------
//         Strings
// ---------------------------------------------------------------

module StringManipulation =

    let string1 = "Hello"

    let string2  = "world"

    /// Use @ to create a verbatim string literal

    let string3 = @"c:\Program Files\"

    /// Using a triple-quote string literal
    let string4 = """He said "hello world" after you did"""

    let helloWorld = string1 + " " + string2 // concatenate the two strings with a space in between

    printfn "%s" helloWorld

    /// A string formed by taking the first 7 characters of one of the result strings
    let substring = helloWorld.[0..6]

    printfn "%s" substring

// ---------------------------------------------------------------
//         Tuples (ordered sets of values)
// ---------------------------------------------------------------

module Tuples =

    /// A simple tuple of integers
    let tuple1 = (1, 2, 3)

    /// A function that swaps the order of two values in a tuple.
    /// QuickInfo shows that the function is inferred to have a generic type.

    let swapElems (a, b) = (b, a)

    printfn "The result of swapping (1, 2) is %A" (swapElems (1,2))

    /// A tuple consisting of an integer, a string, and a double-precision floating point number
    let tuple2 = (1, "fred", 3.1415)

    printfn "tuple1: %A    tuple2: %A" tuple1 tuple2


// ---------------------------------------------------------------
//         Lists and list processing
// ---------------------------------------------------------------

module Lists =

    let list1 = [ ]            /// an empty list

    let list2 = [ 1; 2; 3 ]    /// list of 3 elements

    let list3 = 42 :: list2    /// a new list with '42' added to the beginning

    let numberList = [ 1 .. 1000 ]  /// list of integers from 1 to 1000

    /// A list containing all the days of the year
    let daysList =
        [ for month in 1 .. 12 do
              for day in 1 .. System.DateTime.DaysInMonth(2012, month) do
                  yield System.DateTime(2012, month, day) ]

    /// A list containing the tuples which are the coordinates of the black squares on a chess board.
    let blackSquares =

        [ for i in 0 .. 7 do
              for j in 0 .. 7 do
                  if (i+j) % 2 = 1 then
                      yield (i, j) ]

    /// Square the numbers in numberList, using the pipeline operator to pass an argument to List.map
    let squares =
        numberList
        |> List.map (fun x -> x*x)

    /// Computes the sum of the squares of the numbers divisible by 3.
    let sumOfSquaresUpTo n =
        numberList
        |> List.filter (fun x -> x % 3 = 0)
        |> List.sumBy (fun x -> x * x)

// ---------------------------------------------------------------
//         Classes
// ---------------------------------------------------------------

module DefiningClasses =
    /// The class's constructor takes two arguments: dx and dy, both of type 'float'.
    type Vector2D(dx : float, dy : float) =

        /// The length of the vector, computed when the object is constructed
        let length = sqrt (dx*dx + dy*dy)

        // 'this' specifies a name for the object's self identifier
        // In instance methods, it must appear before the member name.

        member this.DX = dx

        member this.DY = dy

        member this.Length = length

        member this.Scale(k) = Vector2D(k * this.DX, k * this.DY)


    /// An instance of the Vector2D class
    let vector1 = Vector2D(3.0, 4.0)

    /// Get a new scaled vector object, without modifying the original object
    let vector2 = vector1.Scale(10.0)

    printfn "Length of vector1: %f      Length of vector2: %f" vector1.Length vector2.Length


// ---------------------------------------------------------------
//         Generic classes
// ---------------------------------------------------------------

module DefiningGenericClasses =

    type StateTracker<'T>(initialElement: 'T) = // 'T is the type parameter for the class

        /// Store the states in an array
        let mutable states = [ initialElement ]

        /// Add a new element to the list of states
        member this.UpdateState newState =
            states <- newState :: states  // use the '<-' operator to mutate the value

        /// Get the entire list of historical states
        member this.History = states


        /// Get the latest state
        member this.Current = states.Head

    /// An 'int' instance of the state tracker class. Note that the type parameter is inferred.
    let tracker = StateTracker 10

    // Add a state
    tracker.UpdateState 17

// ---------------------------------------------------------------
//         Implementing interfaces
// ---------------------------------------------------------------

/// Type that implements IDisposable

type ReadFile() =

    let file = new System.IO.StreamReader("readme.txt")

    member this.ReadLine() = file.ReadLine()

    // this class's implementation of IDisposable members
    interface System.IDisposable with
        member this.Dispose() = file.Close()

// ---------------------------------------------------------------
//         Arrays
// ---------------------------------------------------------------

module Arrays =

    /// The empty array
    let array1 = [| |]

    let array2 = [| "hello"; "world"; "and"; "hello"; "world"; "again" |]

    let array3 = [| 1 .. 1000 |]

    /// An array containing only the words "hello" and "world"

    let array4 = [| for word in array2 do
                        if word.Contains("l") then
                            yield word |]

    /// An array initialized by index and containing the even numbers from 0 to 2000
    let evenNumbers = Array.init 1001 (fun n -> n * 2)

    /// sub-array extracted using slicing notation
    let evenNumbersSlice = evenNumbers.[0..500]

    for word in array4 do
        printfn "word: %s" word

    // modify an array element using the left arrow assignment operator
    array2.[1] <- "WORLD!"

    /// Calculates the sum of the lengths of the words that start with 'h'
    let sumOfLengthsOfWords =
        array2
        |> Array.filter (fun x -> x.StartsWith "h")
        |> Array.sumBy (fun x -> x.Length)

// ---------------------------------------------------------------
//         Sequences
// ---------------------------------------------------------------


module Sequences =

    // Sequences are evaluated on-demand and are re-evaluated each time they are iterated.
    // An F# sequence is an instance of a System.Collections.Generic.IEnumerable<'T>,
    // so Seq functions can be applied to Lists and Arrays as well.

    /// The empty sequence
    let seq1 = Seq.empty

    let seq2 = seq { yield "hello"; yield "world"; yield "and"; yield "hello"; yield "world"; yield "again" }

    let numbersSeq = seq { 1 .. 1000 }

    /// another array containing only the words "hello" and "world"
    let seq3 =
        seq { for word in seq2 do
                  if word.Contains("l") then
                      yield word }

    let evenNumbers = Seq.init 1001 (fun n -> n * 2)

    let rnd = System.Random()

    /// An infinite sequence which is a random walk
    //  Use yield! to return each element of a subsequence, similar to IEnumerable.SelectMany.

    let rec randomWalk x =
        seq { yield x
              yield! randomWalk (x + rnd.NextDouble() - 0.5) }

    let first100ValuesOfRandomWalk =
        randomWalk 5.0
        |> Seq.truncate 100
        |> Seq.toList

// ---------------------------------------------------------------
//         Recursive functions
// ---------------------------------------------------------------

module RecursiveFunctions  =

    /// Compute the factorial of an integer. Use 'let rec' to define a recursive function
    let rec factorial n =
        if n = 0 then 1 else n * factorial (n-1)

    /// Computes the greatest common factor of two integers.
    //  Since all of the recursive calls are tail calls, the compiler will turn the function into a loop,
    //  which improves performance and reduces memory consumption.

    let rec greatestCommonFactor a b =
        if a = 0 then b
        elif a < b then greatestCommonFactor a (b - a)
        else greatestCommonFactor (a - b) b

    /// Computes the sum of a list of integers using recursion.
    let rec sumList xs =
        match xs with
        | []    -> 0
        | y::ys -> y + sumList ys

    /// Make the function tail recursive, using a helper function with a result accumulator
    let rec private sumListTailRecHelper accumulator xs =
        match xs with
        | []    -> accumulator
        | y::ys -> sumListTailRecHelper (accumulator+y) ys

    let sumListTailRecursive xs = sumListTailRecHelper 0 xs


// ---------------------------------------------------------------
//         Record types
// ---------------------------------------------------------------

module RecordTypes =
    // define a record type
    type ContactCard =
        { Name     : string
          Phone    : string
          Verified : bool }

    let contact1 = { Name = "Alf" ; Phone = "(206) 555-0157" ; Verified = false }

    // Create a new record that is a copy of contact1,
    // but has different values for the 'Phone' and 'Verified' fields

    let contact2 = { contact1 with Phone = "(206) 555-0112"; Verified = true }

    /// Converts a 'ContactCard' object to a string
    let showCard c =
        c.Name + " Phone: " + c.Phone + (if not c.Verified then " (unverified)" else "")


// ---------------------------------------------------------------
//         Union types
// ---------------------------------------------------------------

module UnionTypes =

    /// Represents the suit of a playing card
    type Suit =
        | Hearts
        | Clubs
        | Diamonds
        | Spades

    /// Represents the rank of a playing card
    type Rank =
        /// Represents the rank of cards 2 .. 10
        | Value of int
        | Ace
        | King
        | Queen
        | Jack

        static member GetAllRanks() =
            [ yield Ace
              for i in 2 .. 10 do yield Value i
              yield Jack
              yield Queen
              yield King ]

    type Card =  { Suit: Suit; Rank: Rank }

    /// Returns a list representing all the cards in the deck

    let fullDeck =
        [ for suit in [ Hearts; Diamonds; Clubs; Spades] do
              for rank in Rank.GetAllRanks() do
                  yield { Suit=suit; Rank=rank } ]

    /// Converts a 'Card' object to a string
    let showCard c =
        let rankString =
            match c.Rank with
            | Ace -> "Ace"
            | King -> "King"
            | Queen -> "Queen"
            | Jack -> "Jack"
            | Value n -> string n

        let suitString =
            match c.Suit with
            | Clubs -> "clubs"
            | Diamonds -> "diamonds"
            | Spades -> "spades"
            | Hearts -> "hearts"

        rankString  + " of " + suitString

    let printAllCards() =
        for card in fullDeck do
            printfn "%s" (showCard card)


// ---------------------------------------------------------------
//         Option types
// ---------------------------------------------------------------

module OptionTypes =
    /// Option values are any kind of value tagged with either 'Some' or 'None'.
    /// They are used extensively in F# code to represent the cases where many other
    /// languages would use null references.

    type Customer = { zipCode : decimal option }

    /// Abstract class that computes the shipping zone for the customer's zip code,
    /// given implementations for the 'GetState' and 'GetShippingZone' abstract methods.

    [<AbstractClass>]

    type ShippingCalculator =

        abstract GetState : decimal -> string option

        abstract GetShippingZone : string -> int

        /// Return the shipping zone corresponding to the customer's ZIP code
        /// Customer may not yet have a ZIP code or the ZIP code may be invalid
        member this.CustomerShippingZone(customer : Customer) =

            customer.zipCode
            |> Option.bind this.GetState
            |> Option.map this.GetShippingZone


// ---------------------------------------------------------------
//         Pattern matching
// ---------------------------------------------------------------

module PatternMatching =

    /// A record for a person's first and last name

    type Person =
        { First : string
          Last  : string }

    /// Define a discriminated union of 3 different kinds of employees

    type Employee =
        /// Engineer is just herself
        | Engineer  of Person
        /// Manager has list of reports
        | Manager   of Person * list<Employee>
        /// Executive also has an assistant
        | Executive of Person * list<Employee> * Employee

    /// Count everyone underneath the employee in the management hierarchy, including the employee
    let rec countReports(emp : Employee) =
        1 + match emp with
            | Engineer(id) ->
                0
            | Manager(id, reports) ->
                reports |> List.sumBy countReports
            | Executive(id, reports, assistant) ->
                (reports |> List.sumBy countReports) + countReports assistant

    /// Find all managers/executives named "Dave" who do not have any reports
    let rec findDaveWithOpenPosition(emps : Employee list) =
        emps
        |> List.filter(function
                       | Manager({First = "Dave"}, []) -> true       // [] matches the empty list
                       | Executive({First = "Dave"}, [], _) -> true
                       | _ -> false)                                 // '_' is a wildcard pattern that matches anything
                                                                     // this handles the "or else" case

// ---------------------------------------------------------------
//         Units of measure
// ---------------------------------------------------------------

module UnitsOfMeasure =
    // Code can be annotated with units of measure when using F# arithmetic over numeric types

    open Microsoft.FSharp.Data.UnitSystems.SI.UnitNames

    [<Measure>]
    type mile =

        /// Conversion factor mile to meter: meter is defined in SI.UnitNames

        static member asMeter = 1600.<meter/mile>


    let d  = 50.<mile>          // Distance expressed using imperial units
    let d' = d * mile.asMeter   // Same distance expressed using metric system

    printfn "%A = %A" d d'
    // let error = d + d'       // Compile error: units of measure do not match


// ---------------------------------------------------------------
//         Parallel array programming
// ---------------------------------------------------------------

module ParallelArrayProgramming =

    let oneBigArray = [| 0 .. 100000 |]

    // do some CPU intensive computation
    let rec computeSomeFunction x =
        if x <= 2 then 1
        else computeSomeFunction (x - 1) + computeSomeFunction (x - 2)

    // Do a parallel map over a large input array
    let computeResults() = oneBigArray |> Array.Parallel.map (fun x -> computeSomeFunction (x % 20))

    printfn "Parallel computation results: %A" (computeResults())


// ---------------------------------------------------------------
//         Using events
// ---------------------------------------------------------------

module Events =

    open System

    // Create instance of Event object that consists of subscription point (event.Publish) and event trigger (event.Trigger)
    let simpleEvent = new Event<int>()

    // Add handler
    simpleEvent.Publish.Add(fun x -> printfn "this is handler was added with Publish.Add: %d" x)

    // Trigger event
    simpleEvent.Trigger(5)

    // Create instance of Event that follows standard .NET convention: (sender, EventArgs)
    let eventForDelegateType = new Event<EventHandler, EventArgs>()


    // Add handler
    eventForDelegateType.Publish.AddHandler(
        EventHandler(fun _ _ -> printfn "this is handler was added with Publish.AddHandler"))


    // Trigger event (note that sender argument should be set)
    eventForDelegateType.Trigger(null, EventArgs.Empty)

// ---------------------------------------------------------------
//         Database access using type providers
// ---------------------------------------------------------------

module DatabaseAccess =

    // The easiest way to access a SQL database from F# is to use F# type providers.
    // Add references to System.Data, System.Data.Linq, and FSharp.Data.TypeProviders.dll.
    // You can use Server Explorer to build your ConnectionString.

    (*

    #r "System.Data"
    #r "System.Data.Linq"
    #r "FSharp.Data.TypeProviders"

    open Microsoft.FSharp.Data.TypeProviders

    type SqlConnection = SqlDataConnection<ConnectionString = @"Data Source=.\sqlexpress;Initial Catalog=tempdb;Integrated Security=True">
    let db = SqlConnection.GetDataContext()

    let table =
        query { for r in db.Table do
                select r }

    *)

    // You can also use SqlEntityConnection instead of SqlDataConnection, which accesses the database using Entity Framework.

    ()


// ---------------------------------------------------------------
//         OData access using type providers
// ---------------------------------------------------------------

module OData =

    (*

    open System.Data.Services.Client
    open Microsoft.FSharp.Data.TypeProviders

    // Consume demographics population and income OData service from Azure Marketplace.
    // For more information, see http://go.microsoft.com/fwlink/?LinkId=239712

    type Demographics = Microsoft.FSharp.Data.TypeProviders.ODataService<ServiceUri = "https://api.datamarket.azure.com/Esri/KeyUSDemographicsTrial/">
    let ctx = Demographics.GetDataContext()

    // Sign up for a Azure Marketplace account at https://datamarket.azure.com/account/info
    ctx.Credentials <- System.Net.NetworkCredential ("<your liveID>", "<your Azure Marketplace Key>")

    let cities =
        query { for c in ctx.demog1 do
                where (c.StateName = "Washington") }

    for c in cities do
        printfn "%A - %A" c.GeographyId c.PerCapitaIncome2010.Value

    *)

    ()


#if COMPILED

module BoilerPlateForForm =
    [<System.STAThread>]
    do ()
//    do System.Windows.Forms.Application.Run()

#endif
`
	expected = "(file (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (module_defn (identifier) block: (value_declaration (function_or_value_defn (value_declaration_left (identifier_pattern (long_identifier_or_op (identifier)))) body: (const (int)))) (xml_doc (xml_doc_content)) block: (value_declaration (function_or_value_defn (value_declaration_left (identifier_pattern (long_identifier_or_op (identifier)))) body: (infix_expression (paren_expression (infix_expression (infix_expression (infix_expression (long_identifier_or_op (identifier)) (infix_op) (const (int))) (infix_op) (const (int))) (infix_op) (const (int)))) (infix_op) (const (int))))) (xml_doc (xml_doc_content)) block: (value_declaration (function_or_value_defn (value_declaration_left (identifier_pattern (long_identifier_or_op (identifier)))) body: (list_expression (slice_ranges (slice_range from: (const (int)) to: (const (int))))))) (xml_doc (xml_doc_content)) block: (value_declaration (function_or_value_defn (value_declaration_left (identifier_pattern (long_identifier_or_op (identifier)))) body: (list_expression (short_comp_expression (identifier_pattern (long_identifier_or_op (identifier))) (range_expression (const (int)) (const (int))) (paren_expression (tuple_expression (long_identifier_or_op (identifier)) (infix_expression (long_identifier_or_op (identifier)) (infix_op) (long_identifier_or_op (identifier))))))))) (line_comment) block: (application_expression (application_expression (long_identifier_or_op (identifier)) (const (string))) (long_identifier_or_op (identifier)))) (module_defn (identifier) (line_comment) block: (value_declaration (function_or_value_defn (function_declaration_left (identifier) (argument_patterns (long_identifier (identifier)))) body: (infix_expression (infix_expression (long_identifier_or_op (identifier)) (infix_op) (long_identifier_or_op (identifier))) (infix_op) (const (int))))) (line_comment) block: (value_declaration (function_or_value_defn (function_declaration_left (identifier) (argument_patterns (identifier_pattern (long_identifier_or_op (identifier))))) body: (infix_expression (infix_expression (long_identifier_or_op (identifier)) (infix_op) (long_identifier_or_op (identifier))) (infix_op) (const (int))))) (xml_doc (xml_doc_content)) (xml_doc (xml_doc_content)) block: (value_declaration (function_or_value_defn (value_declaration_left (identifier_pattern (long_identifier_or_op (identifier)))) body: (application_expression (long_identifier_or_op (identifier)) (const (int))))) block: (sequential_expression (application_expression (application_expression (long_identifier_or_op (identifier)) (const (string))) (long_identifier_or_op (identifier))) (line_comment) (declaration_expression (function_or_value_defn (function_declaration_left (identifier) (argument_patterns (typed_pattern (identifier_pattern (long_identifier_or_op (identifier))) (type (long_identifier (identifier)))))) body: (infix_expression (infix_expression (infix_expression (infix_expression (infix_expression (const (int)) (infix_op) (long_identifier_or_op (identifier))) (infix_op) (long_identifier_or_op (identifier))) (infix_op) (long_identifier_or_op (identifier))) (infix_op) (const (int))) (infix_op) (const (int)))) in: (declaration_expression (function_or_value_defn (value_declaration_left (identifier_pattern (long_identifier_or_op (identifier)))) body: (application_expression (long_identifier_or_op (identifier)) (paren_expression (infix_expression (const (int)) (infix_op) (const (int)))))) in: (sequential_expression (application_expression (application_expression (long_identifier_or_op (identifier)) (const (string))) (long_identifier_or_op (identifier))) (declaration_expression (function_or_value_defn (function_declaration_left (identifier) (argument_patterns (long_identifier (identifier)))) body: (if_expression guard: (infix_expression (long_identifier_or_op (identifier)) (infix_op) (const (float))) then: (infix_expression (infix_expression (infix_expression (infix_expression (infix_expression (const (float)) (infix_op) (long_identifier_or_op (identifier))) (infix_op) (long_identifier_or_op (identifier))) (infix_op) (long_identifier_or_op (identifier))) (infix_op) (const (float))) (infix_op) (const (float))) else: (infix_expression (infix_expression (infix_expression (infix_expression (infix_expression (const (float)) (infix_op) (long_identifier_or_op (identifier))) (infix_op) (long_identifier_or_op (identifier))) (infix_op) (long_identifier_or_op (identifier))) (infix_op) (const (float))) (infix_op) (const (float))))) in: (declaration_expression (function_or_value_defn (value_declaration_left (identifier_pattern (long_identifier_or_op (identifier)))) body: (application_expression (long_identifier_or_op (identifier)) (paren_expression (infix_expression (const (float)) (infix_op) (const (float)))))) in: (application_expression (application_expression (long_identifier_or_op (identifier)) (const (string))) (long_identifier_or_op (identifier)))))))))) (line_comment) (line_comment) (line_comment) (module_defn (identifier) block: (value_declaration (function_or_value_defn (value_declaration_left (identifier_pattern (long_identifier_or_op (identifier)))) body: (const (bool)))) block: (value_declaration (function_or_value_defn (value_declaration_left (identifier_pattern (long_identifier_or_op (identifier)))) body: (const (bool)))) block: (value_declaration (function_or_value_defn (value_declaration_left (identifier_pattern (long_identifier_or_op (identifier)))) body: (infix_expression (application_expression (long_identifier_or_op (identifier)) (long_identifier_or_op (identifier))) (infix_op) (paren_expression (infix_expression (long_identifier_or_op (identifier)) (infix_op) (const (bool))))))) block: (application_expression (application_expression (long_identifier_or_op (identifier)) (const (string))) (long_identifier_or_op (identifier)))) (line_comment) (line_comment) (line_comment) (module_defn (identifier) block: (value_declaration (function_or_value_defn (value_declaration_left (identifier_pattern (long_identifier_or_op (identifier)))) body: (const (string)))) block: (value_declaration (function_or_value_defn (value_declaration_left (identifier_pattern (long_identifier_or_op (identifier)))) body: (const (string)))) (xml_doc (xml_doc_content)) block: (value_declaration (function_or_value_defn (value_declaration_left (identifier_pattern (long_identifier_or_op (identifier)))) body: (const (verbatim_string)))) (xml_doc (xml_doc_content)) block: (value_declaration (function_or_value_defn (value_declaration_left (identifier_pattern (long_identifier_or_op (identifier)))) body: (const (triple_quoted_string)))) block: (value_declaration (function_or_value_defn (value_declaration_left (identifier_pattern (long_identifier_or_op (identifier)))) body: (infix_expression (infix_expression (long_identifier_or_op (identifier)) (infix_op) (const (string))) (infix_op) (long_identifier_or_op (identifier))))) (line_comment) block: (sequential_expression (application_expression (application_expression (long_identifier_or_op (identifier)) (const (string))) (long_identifier_or_op (identifier))) (xml_doc (xml_doc_content)) (declaration_expression (function_or_value_defn (value_declaration_left (identifier_pattern (long_identifier_or_op (identifier)))) body: (index_expression (long_identifier_or_op (identifier)) (slice_ranges (slice_range from: (const (int)) to: (const (int)))))) in: (application_expression (application_expression (long_identifier_or_op (identifier)) (const (string))) (long_identifier_or_op (identifier)))))) (line_comment) (line_comment) (line_comment) (module_defn (identifier) (xml_doc (xml_doc_content)) block: (value_declaration (function_or_value_defn (value_declaration_left (identifier_pattern (long_identifier_or_op (identifier)))) body: (paren_expression (tuple_expression (const (int)) (tuple_expression (const (int)) (const (int))))))) (xml_doc (xml_doc_content)) (xml_doc (xml_doc_content)) block: (value_declaration (function_or_value_defn (function_declaration_left (identifier) (argument_patterns (repeat_pattern (identifier_pattern (long_identifier_or_op (identifier))) (identifier_pattern (long_identifier_or_op (identifier)))))) body: (paren_expression (tuple_expression (long_identifier_or_op (identifier)) (long_identifier_or_op (identifier)))))) block: (sequential_expression (application_expression (application_expression (long_identifier_or_op (identifier)) (const (string))) (paren_expression (application_expression (long_identifier_or_op (identifier)) (paren_expression (tuple_expression (const (int)) (const (int))))))) (xml_doc (xml_doc_content)) (declaration_expression (function_or_value_defn (value_declaration_left (identifier_pattern (long_identifier_or_op (identifier)))) body: (paren_expression (tuple_expression (const (int)) (tuple_expression (const (string)) (const (float)))))) in: (application_expression (application_expression (application_expression (long_identifier_or_op (identifier)) (const (string))) (long_identifier_or_op (identifier))) (long_identifier_or_op (identifier)))))) (line_comment) (line_comment) (line_comment) (module_defn (identifier) block: (value_declaration (function_or_value_defn (value_declaration_left (identifier_pattern (long_identifier_or_op (identifier)))) body: (list_expression))) (xml_doc (xml_doc_content)) block: (value_declaration (function_or_value_defn (value_declaration_left (identifier_pattern (long_identifier_or_op (identifier)))) body: (list_expression (const (int)) (const (int)) (const (int))))) (xml_doc (xml_doc_content)) block: (value_declaration (function_or_value_defn (value_declaration_left (identifier_pattern (long_identifier_or_op (identifier)))) body: (infix_expression (const (int)) (infix_op) (long_identifier_or_op (identifier))))) (xml_doc (xml_doc_content)) block: (value_declaration (function_or_value_defn (value_declaration_left (identifier_pattern (long_identifier_or_op (identifier)))) body: (list_expression (slice_ranges (slice_range from: (const (int)) to: (const (int))))))) (xml_doc (xml_doc_content)) (xml_doc (xml_doc_content)) block: (value_declaration (function_or_value_defn (value_declaration_left (identifier_pattern (long_identifier_or_op (identifier)))) body: (list_expression (for_expression (identifier_pattern (long_identifier_or_op (identifier))) (range_expression (const (int)) (const (int))) (for_expression (identifier_pattern (long_identifier_or_op (identifier))) (range_expression (const (int)) (application_expression (dot_expression base: (long_identifier_or_op (long_identifier (identifier)) (identifier)) field: (long_identifier_or_op (identifier))) (tuple_expression (const (int)) (long_identifier_or_op (identifier))))) (prefixed_expression (application_expression (long_identifier_or_op (long_identifier (identifier) (identifier))) (tuple_expression (const (int)) (tuple_expression (long_identifier_or_op (identifier)) (long_identifier_or_op (identifier))))))))))) (xml_doc (xml_doc_content)) block: (value_declaration (function_or_value_defn (value_declaration_left (identifier_pattern (long_identifier_or_op (identifier)))) body: (list_expression (for_expression (identifier_pattern (long_identifier_or_op (identifier))) (range_expression (const (int)) (const (int))) (for_expression (identifier_pattern (long_identifier_or_op (identifier))) (range_expression (const (int)) (const (int))) (if_expression guard: (infix_expression (infix_expression (paren_expression (infix_expression (long_identifier_or_op (identifier)) (infix_op) (long_identifier_or_op (identifier)))) (infix_op) (const (int))) (infix_op) (const (int))) then: (prefixed_expression (paren_expression (tuple_expression (long_identifier_or_op (identifier)) (long_identifier_or_op (identifier))))))))))) (xml_doc (xml_doc_content)) block: (value_declaration (function_or_value_defn (value_declaration_left (identifier_pattern (long_identifier_or_op (identifier)))) body: (application_expression (infix_expression (long_identifier_or_op (identifier)) (infix_op) (long_identifier_or_op (long_identifier (identifier) (identifier)))) (paren_expression (fun_expression (argument_patterns (long_identifier (identifier))) (infix_expression (long_identifier_or_op (identifier)) (infix_op) (long_identifier_or_op (identifier)))))))) (xml_doc (xml_doc_content)) block: (value_declaration (function_or_value_defn (function_declaration_left (identifier) (argument_patterns (long_identifier (identifier)))) body: (application_expression (infix_expression (application_expression (infix_expression (long_identifier_or_op (identifier)) (infix_op) (long_identifier_or_op (long_identifier (identifier) (identifier)))) (paren_expression (fun_expression (argument_patterns (long_identifier (identifier))) (infix_expression (infix_expression (long_identifier_or_op (identifier)) (infix_op) (const (int))) (infix_op) (const (int)))))) (infix_op) (long_identifier_or_op (long_identifier (identifier) (identifier)))) (paren_expression (fun_expression (argument_patterns (long_identifier (identifier))) (infix_expression (long_identifier_or_op (identifier)) (infix_op) (long_identifier_or_op (identifier))))))))) (line_comment) (line_comment) (line_comment) (module_defn (identifier) (xml_doc (xml_doc_content)) block: (type_definition (anon_type_defn (type_name type_name: (identifier)) (primary_constr_args (repeat_pattern (typed_pattern (identifier_pattern (long_identifier_or_op (identifier))) (type (long_identifier (identifier)))) (typed_pattern (identifier_pattern (long_identifier_or_op (identifier))) (type (long_identifier (identifier)))))) (xml_doc (xml_doc_content)) block: (function_or_value_defn (value_declaration_left (identifier_pattern (long_identifier_or_op (identifier)))) body: (application_expression (long_identifier_or_op (identifier)) (paren_expression (infix_expression (infix_expression (infix_expression (long_identifier_or_op (identifier)) (infix_op) (long_identifier_or_op (identifier))) (infix_op) (long_identifier_or_op (identifier))) (infix_op) (long_identifier_or_op (identifier)))))) (line_comment) (line_comment) block: (member_defn (method_or_prop_defn name: (property_or_ident instance: (identifier) method: (identifier)) (long_identifier_or_op (identifier)))) block: (member_defn (method_or_prop_defn name: (property_or_ident instance: (identifier) method: (identifier)) (long_identifier_or_op (identifier)))) block: (member_defn (method_or_prop_defn name: (property_or_ident instance: (identifier) method: (identifier)) (long_identifier_or_op (identifier)))) block: (member_defn (method_or_prop_defn name: (property_or_ident instance: (identifier) method: (identifier)) args: (paren_pattern (identifier_pattern (long_identifier_or_op (identifier)))) (application_expression (long_identifier_or_op (identifier)) (tuple_expression (infix_expression (long_identifier_or_op (identifier)) (infix_op) (long_identifier_or_op (long_identifier (identifier) (identifier)))) (infix_expression (long_identifier_or_op (identifier)) (infix_op) (long_identifier_or_op (long_identifier (identifier) (identifier)))))))))) (xml_doc (xml_doc_content)) block: (value_declaration (function_or_value_defn (value_declaration_left (identifier_pattern (long_identifier_or_op (identifier)))) body: (application_expression (long_identifier_or_op (identifier)) (tuple_expression (const (float)) (const (float)))))) (xml_doc (xml_doc_content)) block: (value_declaration (function_or_value_defn (value_declaration_left (identifier_pattern (long_identifier_or_op (identifier)))) body: (application_expression (long_identifier_or_op (long_identifier (identifier) (identifier))) (const (float))))) block: (application_expression (application_expression (application_expression (long_identifier_or_op (identifier)) (const (string))) (long_identifier_or_op (long_identifier (identifier) (identifier)))) (long_identifier_or_op (long_identifier (identifier) (identifier))))) (line_comment) (line_comment) (line_comment) (module_defn (identifier) block: (type_definition (anon_type_defn (type_name type_name: (long_identifier (identifier)) (type_arguments (type_argument_defn (type_argument (identifier))))) (primary_constr_args (typed_pattern (identifier_pattern (long_identifier_or_op (identifier))) (type (type_argument (identifier))))) (line_comment) (xml_doc (xml_doc_content)) block: (function_or_value_defn (value_declaration_left (identifier_pattern (long_identifier_or_op (identifier)))) body: (list_expression (long_identifier_or_op (identifier)))) (xml_doc (xml_doc_content)) block: (member_defn (method_or_prop_defn name: (property_or_ident instance: (identifier) method: (identifier)) args: (identifier_pattern (long_identifier_or_op (identifier))) (mutate_expression assignee: (long_identifier_or_op (identifier)) value: (infix_expression (long_identifier_or_op (identifier)) (infix_op) (long_identifier_or_op (identifier)))))) (line_comment) (xml_doc (xml_doc_content)) block: (member_defn (method_or_prop_defn name: (property_or_ident instance: (identifier) method: (identifier)) (long_identifier_or_op (identifier)))) (xml_doc (xml_doc_content)) block: (member_defn (method_or_prop_defn name: (property_or_ident instance: (identifier) method: (identifier)) (long_identifier_or_op (long_identifier (identifier) (identifier))))))) (xml_doc (xml_doc_content)) block: (value_declaration (function_or_value_defn (value_declaration_left (identifier_pattern (long_identifier_or_op (identifier)))) body: (application_expression (long_identifier_or_op (identifier)) (const (int))))) (line_comment) block: (application_expression (long_identifier_or_op (long_identifier (identifier) (identifier))) (const (int)))) (line_comment) (line_comment) (line_comment) (xml_doc (xml_doc_content)) (type_definition (anon_type_defn (type_name type_name: (identifier)) (primary_constr_args) block: (function_or_value_defn (value_declaration_left (identifier_pattern (long_identifier_or_op (identifier)))) body: (object_instantiation_expression (type (long_identifier (identifier) (identifier) (identifier))) (paren_expression (const (string))))) block: (member_defn (method_or_prop_defn name: (property_or_ident instance: (identifier) method: (identifier)) args: (const (unit)) (application_expression (long_identifier_or_op (long_identifier (identifier) (identifier)))))) (line_comment) block: (interface_implementation (type (long_identifier (identifier) (identifier))) block: (member_defn (method_or_prop_defn name: (property_or_ident instance: (identifier) method: (identifier)) args: (const (unit)) (application_expression (long_identifier_or_op (long_identifier (identifier) (identifier))))))))) (line_comment) (line_comment) (line_comment) (module_defn (identifier) (xml_doc (xml_doc_content)) block: (value_declaration (function_or_value_defn (value_declaration_left (identifier_pattern (long_identifier_or_op (identifier)))) body: (array_expression))) block: (value_declaration (function_or_value_defn (value_declaration_left (identifier_pattern (long_identifier_or_op (identifier)))) body: (array_expression (const (string)) (const (string)) (const (string)) (const (string)) (const (string)) (const (string))))) block: (value_declaration (function_or_value_defn (value_declaration_left (identifier_pattern (long_identifier_or_op (identifier)))) body: (array_expression (slice_ranges (slice_range from: (const (int)) to: (const (int))))))) (xml_doc (xml_doc_content)) block: (value_declaration (function_or_value_defn (value_declaration_left (identifier_pattern (long_identifier_or_op (identifier)))) body: (array_expression (for_expression (identifier_pattern (long_identifier_or_op (identifier))) (long_identifier_or_op (identifier)) (if_expression guard: (application_expression (long_identifier_or_op (long_identifier (identifier) (identifier))) (const (string))) then: (prefixed_expression (long_identifier_or_op (identifier)))))))) (xml_doc (xml_doc_content)) block: (value_declaration (function_or_value_defn (value_declaration_left (identifier_pattern (long_identifier_or_op (identifier)))) body: (application_expression (application_expression (long_identifier_or_op (long_identifier (identifier) (identifier))) (const (int))) (paren_expression (fun_expression (argument_patterns (long_identifier (identifier))) (infix_expression (long_identifier_or_op (identifier)) (infix_op) (const (int)))))))) (xml_doc (xml_doc_content)) block: (value_declaration (function_or_value_defn (value_declaration_left (identifier_pattern (long_identifier_or_op (identifier)))) body: (index_expression (long_identifier_or_op (identifier)) (slice_ranges (slice_range from: (const (int)) to: (const (int))))))) block: (sequential_expression (for_expression (identifier_pattern (long_identifier_or_op (identifier))) (long_identifier_or_op (identifier)) (application_expression (application_expression (long_identifier_or_op (identifier)) (const (string))) (long_identifier_or_op (identifier)))) (line_comment) (sequential_expression (mutate_expression assignee: (index_expression (long_identifier_or_op (identifier)) index: (const (int))) value: (const (string))) (xml_doc (xml_doc_content)) (declaration_expression (function_or_value_defn (value_declaration_left (identifier_pattern (long_identifier_or_op (identifier)))) body: (application_expression (infix_expression (application_expression (infix_expression (long_identifier_or_op (identifier)) (infix_op) (long_identifier_or_op (long_identifier (identifier) (identifier)))) (paren_expression (fun_expression (argument_patterns (long_identifier (identifier))) (application_expression (long_identifier_or_op (long_identifier (identifier) (identifier))) (const (string)))))) (infix_op) (long_identifier_or_op (long_identifier (identifier) (identifier)))) (paren_expression (fun_expression (argument_patterns (long_identifier (identifier))) (long_identifier_or_op (long_identifier (identifier) (identifier))))))) in: (long_identifier_or_op (MISSING identifier)))))) (line_comment) (line_comment) (line_comment) (module_defn (identifier) (line_comment) (line_comment) (line_comment) (xml_doc (xml_doc_content)) block: (value_declaration (function_or_value_defn (value_declaration_left (identifier_pattern (long_identifier_or_op (identifier)))) body: (long_identifier_or_op (long_identifier (identifier) (identifier))))) block: (value_declaration (function_or_value_defn (value_declaration_left (identifier_pattern (long_identifier_or_op (identifier)))) body: (ce_expression (long_identifier_or_op (identifier)) block: (sequential_expression (prefixed_expression (const (string))) (sequential_expression (prefixed_expression (const (string))) (sequential_expression (prefixed_expression (const (string))) (sequential_expression (prefixed_expression (const (string))) (sequential_expression (prefixed_expression (const (string))) (prefixed_expression (const (string))))))))))) block: (value_declaration (function_or_value_defn (value_declaration_left (identifier_pattern (long_identifier_or_op (identifier)))) body: (ce_expression (long_identifier_or_op (identifier)) block: (application_expression (const (int)) (ERROR) (const (int)))))) (xml_doc (xml_doc_content)) block: (value_declaration (function_or_value_defn (value_declaration_left (identifier_pattern (long_identifier_or_op (identifier)))) body: (ce_expression (long_identifier_or_op (identifier)) block: (for_expression (identifier_pattern (long_identifier_or_op (identifier))) (long_identifier_or_op (identifier)) (if_expression guard: (application_expression (long_identifier_or_op (long_identifier (identifier) (identifier))) (const (string))) then: (prefixed_expression (long_identifier_or_op (identifier)))))))) block: (value_declaration (function_or_value_defn (value_declaration_left (identifier_pattern (long_identifier_or_op (identifier)))) body: (application_expression (application_expression (long_identifier_or_op (long_identifier (identifier) (identifier))) (const (int))) (paren_expression (fun_expression (argument_patterns (long_identifier (identifier))) (infix_expression (long_identifier_or_op (identifier)) (infix_op) (const (int)))))))) block: (value_declaration (function_or_value_defn (value_declaration_left (identifier_pattern (long_identifier_or_op (identifier)))) body: (application_expression (long_identifier_or_op (long_identifier (identifier) (identifier)))))) (xml_doc (xml_doc_content)) (line_comment) block: (value_declaration (function_or_value_defn (function_declaration_left (identifier) (argument_patterns (long_identifier (identifier)))) body: (ce_expression (long_identifier_or_op (identifier)) block: (sequential_expression (prefixed_expression (long_identifier_or_op (identifier))) (prefixed_expression (application_expression (long_identifier_or_op (identifier)) (paren_expression (infix_expression (application_expression (infix_expression (long_identifier_or_op (identifier)) (infix_op) (long_identifier_or_op (long_identifier (identifier) (identifier))))) (infix_op) (const (float)))))))))) block: (value_declaration (function_or_value_defn (value_declaration_left (identifier_pattern (long_identifier_or_op (identifier)))) body: (infix_expression (application_expression (infix_expression (application_expression (long_identifier_or_op (identifier)) (const (float))) (infix_op) (long_identifier_or_op (long_identifier (identifier) (identifier)))) (const (int))) (infix_op) (long_identifier_or_op (long_identifier (identifier) (identifier))))))) (line_comment) (line_comment) (line_comment) (module_defn (identifier) (xml_doc (xml_doc_content)) block: (value_declaration (function_or_value_defn (function_declaration_left (identifier) (argument_patterns (long_identifier (identifier)))) body: (if_expression guard: (infix_expression (long_identifier_or_op (identifier)) (infix_op) (const (int))) then: (const (int)) else: (application_expression (infix_expression (long_identifier_or_op (identifier)) (infix_op) (long_identifier_or_op (identifier))) (paren_expression (application_expression (long_identifier_or_op (identifier)) (const (int)))))))) (xml_doc (xml_doc_content)) (line_comment) (line_comment) block: (value_declaration (function_or_value_defn (function_declaration_left (identifier) (argument_patterns (long_identifier (identifier)) (long_identifier (identifier)))) body: (if_expression guard: (infix_expression (long_identifier_or_op (identifier)) (infix_op) (const (int))) then: (long_identifier_or_op (identifier)) (elif_expression guard: (infix_expression (long_identifier_or_op (identifier)) (infix_op) (long_identifier_or_op (identifier))) then: (application_expression (application_expression (long_identifier_or_op (identifier)) (long_identifier_or_op (identifier))) (paren_expression (infix_expression (long_identifier_or_op (identifier)) (infix_op) (long_identifier_or_op (identifier)))))) else: (application_expression (application_expression (long_identifier_or_op (identifier)) (paren_expression (infix_expression (long_identifier_or_op (identifier)) (infix_op) (long_identifier_or_op (identifier))))) (long_identifier_or_op (identifier)))))) (xml_doc (xml_doc_content)) block: (value_declaration (function_or_value_defn (function_declaration_left (identifier) (argument_patterns (long_identifier (identifier)))) body: (match_expression (long_identifier_or_op (identifier)) (rules (rule pattern: (list_pattern) block: (const (int))) (rule pattern: (cons_pattern (identifier_pattern (long_identifier_or_op (identifier))) (identifier_pattern (long_identifier_or_op (identifier)))) block: (application_expression (infix_expression (long_identifier_or_op (identifier)) (infix_op) (long_identifier_or_op (identifier))) (long_identifier_or_op (identifier)))))))) (xml_doc (xml_doc_content)) block: (value_declaration (function_or_value_defn (function_declaration_left (access_modifier) (identifier) (argument_patterns (long_identifier (identifier)) (long_identifier (identifier)))) body: (match_expression (long_identifier_or_op (identifier)) (rules (rule pattern: (list_pattern) block: (long_identifier_or_op (identifier))) (rule pattern: (cons_pattern (identifier_pattern (long_identifier_or_op (identifier))) (identifier_pattern (long_identifier_or_op (identifier)))) block: (application_expression (application_expression (long_identifier_or_op (identifier)) (paren_expression (infix_expression (long_identifier_or_op (identifier)) (infix_op) (long_identifier_or_op (identifier))))) (long_identifier_or_op (identifier)))))))) block: (value_declaration (function_or_value_defn (function_declaration_left (identifier) (argument_patterns (long_identifier (identifier)))) body: (application_expression (application_expression (long_identifier_or_op (identifier)) (const (int))) (long_identifier_or_op (identifier)))))) (line_comment) (line_comment) (line_comment) (module_defn (identifier) (line_comment) block: (type_definition (record_type_defn (type_name type_name: (identifier)) block: (record_fields (record_field (identifier) (type (long_identifier (identifier)))) (record_field (identifier) (type (long_identifier (identifier)))) (record_field (identifier) (type (long_identifier (identifier))))))) block: (value_declaration (function_or_value_defn (value_declaration_left (identifier_pattern (long_identifier_or_op (identifier)))) body: (brace_expression block: (field_initializers (field_initializer field: (long_identifier (identifier)) value: (const (string))) (field_initializer field: (long_identifier (identifier)) value: (const (string))) (field_initializer field: (long_identifier (identifier)) value: (const (bool))))))) (line_comment) (line_comment) block: (value_declaration (function_or_value_defn (value_declaration_left (identifier_pattern (long_identifier_or_op (identifier)))) body: (brace_expression block: (with_field_expression (long_identifier_or_op (identifier)) block: (field_initializers (field_initializer field: (long_identifier (identifier)) value: (const (string))) (field_initializer field: (long_identifier (identifier)) value: (const (bool)))))))) (xml_doc (xml_doc_content)) block: (value_declaration (function_or_value_defn (function_declaration_left (identifier) (argument_patterns (long_identifier (identifier)))) body: (infix_expression (infix_expression (infix_expression (long_identifier_or_op (long_identifier (identifier) (identifier))) (infix_op) (const (string))) (infix_op) (long_identifier_or_op (long_identifier (identifier) (identifier)))) (infix_op) (paren_expression (if_expression guard: (application_expression (long_identifier_or_op (identifier)) (long_identifier_or_op (long_identifier (identifier) (identifier)))) then: (const (string)) else: (const (string)))))))) (line_comment) (line_comment) (line_comment) (module_defn (identifier) (xml_doc (xml_doc_content)) block: (type_definition (union_type_defn (type_name type_name: (identifier)) block: (union_type_cases (union_type_case (identifier)) (union_type_case (identifier)) (union_type_case (identifier)) (union_type_case (identifier))))) (xml_doc (xml_doc_content)) block: (type_definition (union_type_defn (type_name type_name: (identifier)) (xml_doc (xml_doc_content)) block: (union_type_cases (union_type_case (identifier) (union_type_fields (union_type_field (type (long_identifier (identifier)))))) (union_type_case (identifier)) (union_type_case (identifier)) (union_type_case (identifier)) (union_type_case (identifier))) block: (type_extension_elements (member_defn (method_or_prop_defn name: (property_or_ident (identifier)) args: (const (unit)) (list_expression (prefixed_expression (long_identifier_or_op (identifier))) (for_expression (identifier_pattern (long_identifier_or_op (identifier))) (range_expression (const (int)) (const (int))) (prefixed_expression (application_expression (long_identifier_or_op (identifier)) (long_identifier_or_op (identifier))))) (prefixed_expression (long_identifier_or_op (identifier))) (prefixed_expression (long_identifier_or_op (identifier))) (prefixed_expression (long_identifier_or_op (identifier))))))))) block: (type_definition (record_type_defn (type_name type_name: (identifier)) block: (record_fields (record_field (identifier) (type (long_identifier (identifier)))) (record_field (identifier) (type (long_identifier (identifier))))))) (xml_doc (xml_doc_content)) block: (value_declaration (function_or_value_defn (value_declaration_left (identifier_pattern (long_identifier_or_op (identifier)))) body: (list_expression (for_expression (identifier_pattern (long_identifier_or_op (identifier))) (list_expression (long_identifier_or_op (identifier)) (long_identifier_or_op (identifier)) (long_identifier_or_op (identifier)) (long_identifier_or_op (identifier))) (for_expression (identifier_pattern (long_identifier_or_op (identifier))) (application_expression (long_identifier_or_op (long_identifier (identifier) (identifier)))) (prefixed_expression (brace_expression block: (field_initializers (field_initializer field: (long_identifier (identifier)) value: (long_identifier_or_op (identifier))) (field_initializer field: (long_identifier (identifier)) value: (long_identifier_or_op (identifier))))))))))) (xml_doc (xml_doc_content)) block: (value_declaration (function_or_value_defn (function_declaration_left (identifier) (argument_patterns (long_identifier (identifier)))) body: (declaration_expression (function_or_value_defn (value_declaration_left (identifier_pattern (long_identifier_or_op (identifier)))) body: (match_expression (long_identifier_or_op (long_identifier (identifier) (identifier))) (rules (rule pattern: (identifier_pattern (long_identifier_or_op (identifier))) block: (const (string))) (rule pattern: (identifier_pattern (long_identifier_or_op (identifier))) block: (const (string))) (rule pattern: (identifier_pattern (long_identifier_or_op (identifier))) block: (const (string))) (rule pattern: (identifier_pattern (long_identifier_or_op (identifier))) block: (const (string))) (rule pattern: (identifier_pattern (long_identifier_or_op (identifier)) (identifier_pattern (long_identifier_or_op (identifier)))) block: (application_expression (long_identifier_or_op (identifier)) (long_identifier_or_op (identifier))))))) in: (declaration_expression (function_or_value_defn (value_declaration_left (identifier_pattern (long_identifier_or_op (identifier)))) body: (match_expression (long_identifier_or_op (long_identifier (identifier) (identifier))) (rules (rule pattern: (identifier_pattern (long_identifier_or_op (identifier))) block: (const (string))) (rule pattern: (identifier_pattern (long_identifier_or_op (identifier))) block: (const (string))) (rule pattern: (identifier_pattern (long_identifier_or_op (identifier))) block: (const (string))) (rule pattern: (identifier_pattern (long_identifier_or_op (identifier))) block: (const (string)))))) in: (infix_expression (infix_expression (long_identifier_or_op (identifier)) (infix_op) (const (string))) (infix_op) (long_identifier_or_op (identifier))))))) block: (value_declaration (function_or_value_defn (function_declaration_left (identifier) (argument_patterns (const (unit)))) body: (for_expression (identifier_pattern (long_identifier_or_op (identifier))) (long_identifier_or_op (identifier)) (application_expression (application_expression (long_identifier_or_op (identifier)) (const (string))) (paren_expression (application_expression (long_identifier_or_op (identifier)) (long_identifier_or_op (identifier))))))))) (line_comment) (line_comment) (line_comment) (module_defn (identifier) (xml_doc (xml_doc_content)) (xml_doc (xml_doc_content)) (xml_doc (xml_doc_content)) block: (type_definition (record_type_defn (type_name type_name: (identifier)) block: (record_fields (record_field (identifier) (type (type (long_identifier (identifier))) (long_identifier (identifier))))))) (xml_doc (xml_doc_content)) (xml_doc (xml_doc_content)) block: (type_definition (attributes (attribute_set (attribute (object_construction (type (long_identifier (identifier))))))) (anon_type_defn (type_name type_name: (identifier)) block: (member_defn (member_signature (identifier) (curried_spec (arguments_spec (argument_spec (type (long_identifier (identifier))))) (type (type (long_identifier (identifier))) (long_identifier (identifier)))))) block: (member_defn (member_signature (identifier) (curried_spec (arguments_spec (argument_spec (type (long_identifier (identifier))))) (type (long_identifier (identifier)))))) (xml_doc (xml_doc_content)) (xml_doc (xml_doc_content)) block: (member_defn (method_or_prop_defn name: (property_or_ident instance: (identifier) method: (identifier)) args: (paren_pattern (typed_pattern (identifier_pattern (long_identifier_or_op (identifier))) (type (long_identifier (identifier))))) (application_expression (infix_expression (application_expression (infix_expression (long_identifier_or_op (long_identifier (identifier) (identifier))) (infix_op) (long_identifier_or_op (long_identifier (identifier) (identifier)))) (long_identifier_or_op (long_identifier (identifier) (identifier)))) (infix_op) (long_identifier_or_op (long_identifier (identifier) (identifier)))) (long_identifier_or_op (long_identifier (identifier) (identifier))))))))) (line_comment) (line_comment) (line_comment) (module_defn (identifier) (xml_doc (xml_doc_content)) block: (type_definition (record_type_defn (type_name type_name: (identifier)) block: (record_fields (record_field (identifier) (type (long_identifier (identifier)))) (record_field (identifier) (type (long_identifier (identifier))))))) (xml_doc (xml_doc_content)) block: (type_definition (union_type_defn (type_name type_name: (identifier)) (xml_doc (xml_doc_content)) block: (union_type_cases (union_type_case (identifier) (union_type_fields (union_type_field (type (long_identifier (identifier)))))) (xml_doc (xml_doc_content)) (union_type_case (identifier) (union_type_fields (union_type_field (type (long_identifier (identifier)))) (union_type_field (type (long_identifier (identifier)) (type_attributes (type_attribute (type (long_identifier (identifier))))))))) (xml_doc (xml_doc_content)) (union_type_case (identifier) (union_type_fields (union_type_field (type (long_identifier (identifier)))) (union_type_field (type (long_identifier (identifier)) (type_attributes (type_attribute (type (long_identifier (identifier))))))) (union_type_field (type (long_identifier (identifier))))))))) (xml_doc (xml_doc_content)) block: (value_declaration (function_or_value_defn (function_declaration_left (identifier) (argument_patterns (typed_pattern (identifier_pattern (long_identifier_or_op (identifier))) (type (long_identifier (identifier)))))) body: (infix_expression (const (int)) (infix_op) (match_expression (long_identifier_or_op (identifier)) block: (rules (rule pattern: (identifier_pattern (long_identifier_or_op (identifier)) (paren_pattern (identifier_pattern (long_identifier_or_op (identifier))))) block: (const (int))) (rule pattern: (identifier_pattern (long_identifier_or_op (identifier)) (paren_pattern (repeat_pattern (identifier_pattern (long_identifier_or_op (identifier))) (identifier_pattern (long_identifier_or_op (identifier)))))) block: (application_expression (infix_expression (long_identifier_or_op (identifier)) (infix_op) (long_identifier_or_op (long_identifier (identifier) (identifier)))) (long_identifier_or_op (identifier)))) (rule pattern: (identifier_pattern (long_identifier_or_op (identifier)) (paren_pattern (repeat_pattern (identifier_pattern (long_identifier_or_op (identifier))) (identifier_pattern (long_identifier_or_op (identifier))) (identifier_pattern (long_identifier_or_op (identifier)))))) block: (application_expression (infix_expression (paren_expression (application_expression (infix_expression (long_identifier_or_op (identifier)) (infix_op) (long_identifier_or_op (long_identifier (identifier) (identifier)))) (long_identifier_or_op (identifier)))) (infix_op) (long_identifier_or_op (identifier))) (long_identifier_or_op (identifier))))))))) (xml_doc (xml_doc_content)) block: (value_declaration (function_or_value_defn (value_declaration_left (identifier_pattern (long_identifier_or_op (long_identifier (identifier))) (paren_pattern (typed_pattern (identifier_pattern (long_identifier_or_op (identifier))) (type (type (long_identifier (identifier))) (long_identifier (identifier))))))) body: (infix_expression (long_identifier_or_op (identifier)) (infix_op) (long_identifier_or_op (long_identifier (identifier) (identifier)))) (ERROR (long_identifier_or_op (identifier)) (record_pattern (field_pattern (long_identifier (identifier)) (const (string))))))) (ERROR) block: (list_expression) (ERROR) block: (infix_expression (infix_expression (infix_expression (application_expression (infix_expression (const (bool)) (line_comment) (infix_op) (long_identifier_or_op (identifier))) (tuple_expression (brace_expression block: (field_initializers (field_initializer field: (long_identifier (identifier)) value: (const (string))))) (tuple_expression (list_expression) (long_identifier_or_op (identifier))))) (infix_op) (const (bool))) (infix_op) (long_identifier_or_op (identifier))) (infix_op) (const (bool)))) (ERROR) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (module_defn (identifier) (line_comment) block: (import_decl (long_identifier (identifier) (identifier) (identifier) (identifier) (identifier) (identifier))) block: (type_definition (attributes (attribute_set (attribute (object_construction (type (long_identifier (identifier))))))) (anon_type_defn (type_name type_name: (identifier)) (xml_doc (xml_doc_content)) block: (member_defn (method_or_prop_defn name: (property_or_ident (identifier)) (infix_expression (infix_expression (typed_expression (const (float)) (types (type (long_identifier (identifier)))) (MISSING \">\")) (infix_op) (long_identifier_or_op (identifier))) (infix_op) (long_identifier_or_op (MISSING identifier))))))) block: (value_declaration (function_or_value_defn (value_declaration_left (identifier_pattern (long_identifier_or_op (identifier)))) body: (typed_expression (const (float)) (types (type (long_identifier (identifier))))))) (line_comment) block: (value_declaration (function_or_value_defn (value_declaration_left (identifier_pattern (long_identifier_or_op (identifier)))) body: (infix_expression (long_identifier_or_op (identifier)) (infix_op) (long_identifier_or_op (long_identifier (identifier) (identifier)))))) (line_comment) block: (application_expression (application_expression (application_expression (long_identifier_or_op (identifier)) (const (string))) (long_identifier_or_op (identifier))) (long_identifier_or_op (identifier)))) (line_comment) (line_comment) (line_comment) (line_comment) (module_defn (identifier) block: (value_declaration (function_or_value_defn (value_declaration_left (identifier_pattern (long_identifier_or_op (identifier)))) body: (array_expression (slice_ranges (slice_range from: (const (int)) to: (const (int))))))) (line_comment) block: (value_declaration (function_or_value_defn (function_declaration_left (identifier) (argument_patterns (long_identifier (identifier)))) body: (if_expression guard: (infix_expression (long_identifier_or_op (identifier)) (infix_op) (const (int))) then: (const (int)) else: (application_expression (infix_expression (application_expression (long_identifier_or_op (identifier)) (paren_expression (infix_expression (long_identifier_or_op (identifier)) (infix_op) (const (int))))) (infix_op) (long_identifier_or_op (identifier))) (paren_expression (infix_expression (long_identifier_or_op (identifier)) (infix_op) (const (int)))))))) (line_comment) block: (value_declaration (function_or_value_defn (function_declaration_left (identifier) (argument_patterns (const (unit)))) body: (application_expression (infix_expression (long_identifier_or_op (identifier)) (infix_op) (dot_expression base: (long_identifier_or_op (long_identifier (identifier)) (identifier)) field: (long_identifier_or_op (identifier)))) (paren_expression (fun_expression (argument_patterns (long_identifier (identifier))) (application_expression (long_identifier_or_op (identifier)) (paren_expression (infix_expression (long_identifier_or_op (identifier)) (infix_op) (const (int)))))))))) block: (application_expression (application_expression (long_identifier_or_op (identifier)) (const (string))) (paren_expression (application_expression (long_identifier_or_op (identifier)))))) (line_comment) (line_comment) (line_comment) (module_defn (identifier) block: (import_decl (long_identifier (identifier))) (line_comment) block: (value_declaration (function_or_value_defn (value_declaration_left (identifier_pattern (long_identifier_or_op (identifier)))) body: (object_instantiation_expression (type (long_identifier (identifier)) (type_attributes (type_attribute (type (long_identifier (identifier)))))) (const (unit))))) (line_comment) block: (sequential_expression (application_expression (dot_expression base: (long_identifier_or_op (long_identifier (identifier)) (identifier)) field: (long_identifier_or_op (identifier))) (fun_expression (argument_patterns (long_identifier (identifier))) (application_expression (application_expression (long_identifier_or_op (identifier)) (const (string))) (long_identifier_or_op (identifier))))) (line_comment) (sequential_expression (application_expression (long_identifier_or_op (long_identifier (identifier) (identifier))) (const (int))) (line_comment) (declaration_expression (function_or_value_defn (value_declaration_left (identifier_pattern (long_identifier_or_op (identifier)))) body: (object_instantiation_expression (type (long_identifier (identifier)) (type_attributes (type_attribute (type (long_identifier (identifier)))) (type_attribute (type (long_identifier (identifier)))))) (const (unit)))) (line_comment) in: (sequential_expression (application_expression (dot_expression base: (long_identifier_or_op (long_identifier (identifier)) (identifier)) field: (long_identifier_or_op (identifier))) (application_expression (long_identifier_or_op (identifier)) (fun_expression (argument_patterns) (application_expression (long_identifier_or_op (identifier)) (const (string)))))) (line_comment) (application_expression (long_identifier_or_op (long_identifier (identifier) (identifier))) (tuple_expression (long_identifier_or_op (long_identifier (identifier) (identifier)))))))))) (line_comment) (line_comment) (line_comment) (module_defn (identifier) (line_comment) (line_comment) (line_comment) (block_comment (block_comment_content)) (line_comment) block: (const (unit))) (line_comment) (line_comment) (line_comment) (module_defn (identifier) (block_comment (block_comment_content)) block: (const (unit))) (preproc_if condition: (identifier) (module_defn (identifier) block: (value_declaration (attributes (attribute_set (attribute (object_construction (type (long_identifier (identifier) (identifier))))))) (do (const (unit)))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), fsharp.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}