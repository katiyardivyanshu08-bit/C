// Program for addition of 2 numbers
#include <stdio.h>
int main()
{
    // int n1=5,n2=10,sum;
    int n1, n2, sum;
    printf("write values:");
    scanf("%d%d", &n1, &n2); // &(ampersand) = address-of operator(It gives the memory address(location) of a var.,which tells scanf() where to store the input value)
    sum = n1 + n2;
    printf("Sum of 2 numbers is %d", sum);
    // Enter marks in 5 subjects: 85 75 60 72 56 (You can give input by giving space between values)
}