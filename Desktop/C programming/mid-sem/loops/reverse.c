#include <stdio.h>
int main()
{ system("cls");
    int i,n,s,d;
    s=0;
    printf("Enter a number : ");scanf("%d",&n);
    for(i=1;n>0;i=i+1){
        d=n%10;
        s=10*s+d;
        n/=10;       
    }printf("%d",s);
    return 0;
}