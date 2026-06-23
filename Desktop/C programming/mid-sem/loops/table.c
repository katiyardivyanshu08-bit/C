#include <stdio.h>
int main()
{ system("cls");
    int i,n;
    printf("Enter a number : ");scanf("%d",&n);
    for(i=n;i<=n*10;i=i+n){
        printf("%d ",i);
    }
    return 0;
}
