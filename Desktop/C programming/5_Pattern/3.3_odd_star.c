#include <stdio.h>
int main()
{ system("cls");
    int n;
    scanf("%d",&n);
    int a=1;
    for(int i=1;i<=n;i++){
         for(int j=1;j<=(2*i)-1;j++){
            printf("*");
         }  

    //     for(int j=1;j<=a;j++) {   
    //         printf("*");
    //       }
    //    a+=2;

        printf("\n");
    }
    return 0;
}