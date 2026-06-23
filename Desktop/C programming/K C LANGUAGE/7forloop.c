// Loop = A loop allows you to repeat a block of code multiple times.
// 3 types => for loop, while loop, do while loop

// Increment/Decrement => n=n+1 can be shortened into n++ or ++n. Similarly, n-- will decrease the value of n by 1. i++ or ++i are same
// ++n = pre-increment & n++ = post-increment
// Shorthand Operators => Sometimes we need to increase/decrease diff. value of a var. instead of 1. For these cases,C provides Shorthand Operators. Ex= n=n+3 can be shortened to n+=3.
// UNARY operator => one operator & 1 operand. operand can be either side of operator like i++ or ++i
// BINARY operator => two operands and one operator like a+b

// The for loop has 3 components in the parentheses.
/* 1st part = Initialization of var.
   2nd part = terminating cond. of loop
   3rd part = Increment/Decrement cond. */
// Note the semicolon b/w the parameters
#include <stdio.h>
int main()
{
    for (int i = 1; i < 5; ++i)
    { // i is defined for only this loop
        printf("%d\n", i);
    }
    /*
    for (int i=2;i==10;i+2) {
    printf("%d",i); }
i ==10 means condition is already false,so the the loop never executes.*/

    /*
    for (int i=2;i<=10;i+=2) {
    // The 3rd parameter (i+2) does not update i.You need to write i+=2 otherwise your program will get stuck in an infinite loop.
    printf("%d",i); }
    
    */
}

/* int a,b;
    a=1;
    // b=a+++++a;This is wrong.
    Rule: 1. First write value of var.(a) as it is.
    2. Add internally 1 in var.(a).
    3. Again add internally 1 in var.(a). Then add 1st and last value.
    Ex-
    b=a++ + ++a; //a++ → yields 1, then a = 2. ++a → increments to 3, yields 3.          So b = 1 + 3 = 4, a = 3
     a++ + ++a 3rd plus is binary operator.   if a=3, 3+5=8
    printf("%d %d",b,a);
    printf("\n");
    a=2,b=a++ + ++a; // 2+4=6
    printf("%d %d",b,a);*/


