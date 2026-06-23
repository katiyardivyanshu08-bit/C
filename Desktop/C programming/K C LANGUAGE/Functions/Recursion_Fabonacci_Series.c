// Fabonacci Series = 0 1 1 2 3 5 8 13 21 34 ...
#include <stdio.h>
// Recursive function to return the nth Fibonacci number
int fib(int n) {
    if (n == 0)
        return 0; // Base case 1
    else if (n == 1)
        return 1; // Base case 2
    else
        return fib(n - 1) + fib(n - 2); // Recursive relation
}
int main() {
    int n, i;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series: ");
    for (i = 0; i < n; i++) {
        printf("%d ", fib(i));
    }

    printf("\n");
    return 0;
}