#include <stdio.h>
int main()
{ system("cls");
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){      
        for(int j=1;i+j<=n;j++) {   
            printf("\t ");
          }
        for(int k=1;k<=i;k++) {   
            printf("\t*");
          } 

        printf("\n");
    }
    return 0;
}