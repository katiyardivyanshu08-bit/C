// THIS IS SINGLE LINE COMMENT
/*  THIS IS MULTILINE COMMENT  */
// In C,here comma is not just a seperator,but also a comma operator(,) which executes code from left to right. In Python, a comma is not an operator.
//  Compiler converts our program into machine language program b/c machine understands only binary lang.
// #include command used to add a header file to the program.
#include <stdio.h> // <stdio.h> add header file to the program, where h = header
// A header file is a file that contains functions & commands like printf(),scanf()
// Each C program has a entry point(starting point) that is a func. c/d main().
// Curly brackets indicate the beginning and ending of a func. that is k/w as function's body. We need to write the code in these brackets.
int main()
{
    printf("Welcome to C\n"); // We can't use single quotes for more than 1 char b/c more than one char data type is string.

    // Double quotes used for strings and single quotes used for one(single) char only
    // printf('K');  THIS IS INCORRECT STATEMENT
    printf("%c", 'K'); // This is correct

    /*  Double Quotes => str
        Single Quotes => char   */
    // printf ( "%d", 3);
    return 0;        // This statement indicates that our program has successfully completed.
    printf("%d", 3); // doesn't produce o/p
}
// The arithmetic operators available in C are +, -, *, / and %(modulus operator)
// C does not contain any keyword to display output on the screen. All output to screen is achieved using readymade library functions like printf( ).
/* The general form of printf( ) function is,
printf ( "<format string>", <list of variables> ) ; */

#include <string.h>
