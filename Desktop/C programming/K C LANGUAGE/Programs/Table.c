#include <stdio.h>
int main() {
    // int i,n;
    // i=1;
    // scanf("%d",&n);
    // while (i<=10)
    // {
    //     printf("%d\n",i*n);
    //     i++;
    // }

    // By do-while
    int n,i=1;
    printf("Enter a no.");
    scanf("%d",&n);
    do {
        printf("%d\n",n*i);
        i++;
        
    }
    while (i<=10);
}
