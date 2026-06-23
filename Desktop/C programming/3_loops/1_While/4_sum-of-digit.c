#include <stdio.h>
int main()
{ system("cls");
    int sum,n,ld;
    printf("Enter a number : ");scanf("%d",&n);
    sum=0;
    while(n!=0){
        ld=n%10;
        sum=sum+ld;
        n=n%10;
    }
    printf("sum of digit is : %d",sum);
    return 0;
}
