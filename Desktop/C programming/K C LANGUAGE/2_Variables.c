// Let chr.= character, char=DT
#include <stdio.h>
int main()
{ // RULES OF VARIABLES ARE SAME AS PYTHON
    // Always terminated all statements with semicolon
    // In C lang., there are 3 data types- int,float,char

    int a;     // Variable Declaration
    a = 1;     // Variable Initialization
    int b = 2; // Both variable declaration & initialization simultaneously
    // float c=3.2  or
    float c;
    c = 3.2;
    // printf() func. doesn't add a new line at the end of output.
    printf("Value of a is %d\n", a);          // %d used for int data type that is digit value(whole value)
    printf("Value of b and c is %d %f", b, c); // %f used for float data type(DT)

    // char v='c';
    char v;
    v = 'c';                         // IT ALWAYS TAKES SINGLE QUOTES
    printf("Value of v is %c\n", v); // %c used for char DT
    // %c used for single char.    %s used for strings
    float n1 = 10.566, n2 = 20.45;
    //    format specifier(placeholder for values) = %d,%f,%lf, %.1f,%.2f, %c,%f
    printf("n1= %f & n2= %.2f", n1, n2); // format specifier(placeholder for values) is replaced by corr.(corresponding) values provided to printf() seperated by commas.

    /* %d= whole numbers
       %f = floating point numbers
       %c = single characters
       %s = used for strings */
}