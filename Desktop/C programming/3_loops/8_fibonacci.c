#include <stdio.h>

int main() {
    system("cls");  
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    int a = 0, b = 1, next;
    int sum=0;

    printf("Fibonacci Series: ");

    for (int i = 1; i <= n; i++) {
        printf("%d ", a);
        sum+=a;
        next = a + b;
        a = b;
        b = next;

    }
    printf("\n%d",sum);

    return 0;
}
