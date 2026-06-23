#include <stdio.h>

int f(int n) {
    if (n == 1 || n==0) {return 1;}     // base case (use for stop recursion.)
    return n * f(n - 1);   // recursive call

             //OR//
    // int recAns = n * f(n - 1); 
    // return recAns;   
    
}
 
int main() {
    system("cls");
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factorial = %d", f(n));
    return 0;
}
