//
// Test file I use to test the grammar
//

/*
   Block coments

    /*
     * That are nested
     *
     *
     */ (C/C++ would end the block here)

   I will use this file to see if anyghing breaks as I add features or to fix bugs in
   the grammar. More cases will be added as it gets more complex.

 */


TestStruct1 :: struct {
    // Testing some literals
    var1 : int;
    var2 : string = "multi .   .   . \
 .   .   .   .   .   line   .   .   .\
  .   .   .   .   .  string\r\n\t\0";
    var3 := 0xDEAD_BEEF;
    var4 : float32 = 0hAB_CD_12_34;
    CONST1: string : "as if the string is going to fluctuate";
    CONST2 :: -1_2_3_4_5_6_7_0;
    CONST3 : int : #char "β";
    // I'll add as I encounter more issues
}

TestStruct2 :: struct (type: Type = s64) {
    
}


test_proc1 :: () {
    procedure_call(arg1, arg2);

    // Structs and parameterized structs

    struct_literal1 := TestStruct1.{};
    struct_literal2 := TestStruct2(69).{ };
    
    //        Parameterized struct type
    struct1 : TestStruct2(420, 540, 999, "perhaps") = .{420, 540, 999, "perhaps"};

    //              Parameterized struct literal with named values
    call_expression(TestStruct2(s32).{var1=69,var2=420});

    //                                  This is supposed to be a parameterized struct, but a function
    //                                  call is also syntactically valid. Nothing I can do about that.
    type_arguments : TestStruct2(type = TestStruct2(type = s64));


    // procedures

    procedure_type : (int, int) -> int ;

    variable := procedure();

    // multiple variable declaration

    var1, var2 := 1, 2;
    const1, const2 :: 1, 2;

    var3, var4 : []string = .["", ""], string.["", ""];
    var5, var6 := procedure_call("declaration");
    var5, var6  = procedure_call("assignment");
    const3, const4 :: procedure_call("constant");

    // many more
    lets, try, even, more, variables := 1, 2, 3, 4, 5;
    lets, try, even, more, constants :: 1, 2, 3, 4, 5;
    // and assign/update
    lets, try, even, more, constants = 1, 2, 3, 4, 5;
    lets, try, even, more, constants += 1, 2, 3, 4, 5;

    pointer_type := *var1;
    
    if procedure_call("condition") == 1 // then
        print("consequence\n");
    else                  
        print("alternative\n");

    #if thing != null {
        print("");
    } else #if thing == .{} {
        print("");
    } else {
        print("");
    }

    if thing
        print("");
    else if thing
        print("");
    else
        print("");


    // This seems to work too
    if 0 << << pointer_type  print();

    if x == 5 then print("x is 5.\n"); else print("x is not 5.\n");  // Here we will execute the 'then' code, because (x == 5) is true.


    name := ifx thing then thing.name else "";

    mame := ifx thing then thing.name; // without else

    name := ifx thing {
        print("This is the true block.\n");
        factorial(5);
        thing.name;
    } else  {
        print("We are about to get the default name.\n");
        x := 3;
        print("Really, it is going to happen.\n");
        get_default_name();
    }

    // big expressions

    // this errors and breaks the entire procedure block. TODO: fix
    // if (member.expr * 2 + 1) * 100 < expr.again * another.expr {
    //     // yes
    // } else {
    //     // no
    // }

}

call_expression :: (polymorphic_args: $T) -> () {
    print("%%%%%\n",1, s32, "some random args", .{10}, .[10]);
    print("%\n", polymorphic_args);
}
