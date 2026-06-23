#include <stdio.h>
int main()
{ system("cls");
    int i,n;
    printf("Enter a number : ");scanf("%d",&n);
    int a=0;
    int b=0;

    for (i=1;i<=n;i++){
        if (i%2!=0){
        printf("%d ",i);
        a+=i;
        }

        else{
            printf("%d ",-i);
            b+=-i;
        }

    }

    printf("\n%d\n",a);
    printf("%d\n",b);
    int sum=a+b;
    printf("%d",sum);
    return 0;
}
