
#include <stdio.h>
int main() {
    // By direct formula
    // printf("Enter no.");
    // int n;
    // scanf("%d",&n);
    // int s=n*(n+1)/2;
    // printf("Sum of first %d natural no.=%d",n,s);

    // By for loop
    // int n;
    // printf("Enter a no.");
    // scanf("%d",&n);
    // int s=0;
    // for(int i=1;i<=n;i++) {
    // s=s+i;}
    // printf("Sum= %d",s);

    // Print even numbers b/w 1 and N
    int n;
     printf("Enter a no.");
     scanf("%d",&n);
     for (int i = 2; i <= n; i += 2) {
    printf("%d ", i);
}

     
}