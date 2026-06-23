#include <stdio.h>
int main()
{ system("cls");
    int i,n;
    printf("Enter a number : ");scanf("%d",&n);
    int a=0;
    for (i=1;i<=n;i++){
        printf("%d ",i);
        a+=i;
    }
    printf("\n%d\n",a);
    int b=0;
    for (i=n;i>=1;i--){
        printf("%d ",i);
        b+=i;
    }
    printf("\n%d\n",b);
    int sum=a+b;
    printf("%d",sum);
    return 0;
}
