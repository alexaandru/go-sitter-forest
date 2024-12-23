/*------------------------------------------------------------------------------

Copyright (C) John-Philip Taylor
jpt13653903@gmail.com
--------------------------------------------------------------------------------

Defines the following printf-like macros:
- debug
- info
- warning
- error
- assert

The debug macro only produces output when "DEBUG" is defined.  The others
always produces output.  The macros report the current file, function and line
number as part of the console output.
------------------------------------------------------------------------------*/

#ifndef debug_macros_h
#define debug_macros_h
//------------------------------------------------------------------------------

#include <stdio.h>
//------------------------------------------------------------------------------

#define ANSI_RESET             "\033[0m"
#define ANSI_FG_BLACK          "\033[30m"
#define ANSI_BG_BLACK          "\033[40m"
#define ANSI_FG_RED            "\033[31m"
#define ANSI_BG_RED            "\033[41m"
#define ANSI_FG_GREEN          "\033[32m"
#define ANSI_BG_GREEN          "\033[42m"
#define ANSI_FG_YELLOW         "\033[33m"
#define ANSI_BG_YELLOW         "\033[43m"
#define ANSI_FG_BLUE           "\033[34m"
#define ANSI_BG_BLUE           "\033[44m"
#define ANSI_FG_MAGENTA        "\033[35m"
#define ANSI_BG_MAGENTA        "\033[45m"
#define ANSI_FG_CYAN           "\033[36m"
#define ANSI_BG_CYAN           "\033[46m"
#define ANSI_FG_WHITE          "\033[37m"
#define ANSI_BG_WHITE          "\033[47m"
#define ANSI_FG_BRIGHT_BLACK   "\033[90m"
#define ANSI_BG_BRIGHT_BLACK   "\033[100m"
#define ANSI_FG_BRIGHT_RED     "\033[91m"
#define ANSI_BG_BRIGHT_RED     "\033[101m"
#define ANSI_FG_BRIGHT_GREEN   "\033[92m"
#define ANSI_BG_BRIGHT_GREEN   "\033[102m"
#define ANSI_FG_BRIGHT_YELLOW  "\033[93m"
#define ANSI_BG_BRIGHT_YELLOW  "\033[103m"
#define ANSI_FG_BRIGHT_BLUE    "\033[94m"
#define ANSI_BG_BRIGHT_BLUE    "\033[104m"
#define ANSI_FG_BRIGHT_MAGENTA "\033[95m"
#define ANSI_BG_BRIGHT_MAGENTA "\033[105m"
#define ANSI_FG_BRIGHT_CYAN    "\033[96m"
#define ANSI_BG_BRIGHT_CYAN    "\033[106m"
#define ANSI_FG_BRIGHT_WHITE   "\033[97m"
#define ANSI_BG_BRIGHT_WHITE   "\033[107m"
//------------------------------------------------------------------------------

#if defined(DEBUG)
  #define debug(...) do {                                          \
    printf(ANSI_FG_GREEN "Debug: " ANSI_RESET __VA_ARGS__);        \
    printf(ANSI_FG_BRIGHT_BLACK " [%s +%d \"%s(...)\"]\n"          \
           ANSI_RESET, __FILE__, __LINE__, __func__);              \
    fflush(stdout);                                                \
  }while(0)
#else
  #define debug(...)
#endif

#define info(...) do {                                  \
  printf(ANSI_FG_CYAN "Info: " ANSI_RESET __VA_ARGS__); \
  printf(ANSI_FG_BRIGHT_BLACK " [%s +%d \"%s(...)\"]\n" \
         ANSI_RESET, __FILE__, __LINE__, __func__);     \
  fflush(stdout);                                       \
}while(0)

#define warning(...) do {                                    \
  printf(ANSI_FG_YELLOW "Warning: " ANSI_RESET __VA_ARGS__); \
  printf(ANSI_FG_BRIGHT_BLACK " [%s +%d \"%s(...)\"]\n"      \
         ANSI_RESET, __FILE__, __LINE__, __func__);          \
  fflush(stdout);                                            \
}while(0)

#define error(...) do {                                        \
  printf(ANSI_FG_BRIGHT_RED "Error: " ANSI_RESET __VA_ARGS__); \
  printf(ANSI_FG_BRIGHT_BLACK " [%s +%d \"%s(...)\"]\n"        \
         ANSI_RESET, __FILE__, __LINE__, __func__);            \
  fflush(stdout);                                              \
}while(0)

#define assert(condition, ...) do {                       \
  if(!(condition)){                                       \
    printf(ANSI_FG_BRIGHT_RED "Failed assertion: ");      \
    printf(ANSI_RESET "%s", #condition);                  \
    printf(ANSI_FG_BRIGHT_BLACK " [%s +%d \"%s(...)\"]\n" \
           ANSI_RESET, __FILE__, __LINE__, __func__);     \
    fflush(stdout);                                       \
    __VA_ARGS__;                                          \
  }                                                       \
}while(0)
//------------------------------------------------------------------------------

#endif
//------------------------------------------------------------------------------
