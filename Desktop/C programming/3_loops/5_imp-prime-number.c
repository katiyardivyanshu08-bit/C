#include <stdio.h>
int main()
{ system("cls");
    int i,n;
    printf("Enter a number : ");scanf("%d",&n);
    for (i=2;i<=n-1;i++){
        if (n%i==0){ printf("composite");break;}
    else {printf("prime");break;}
    }
    return 0;
}
