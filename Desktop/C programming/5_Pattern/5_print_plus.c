#include <stdio.h>
int main()
{ system("cls");
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){      
      for(int j=1;j<=n;j++) { 
         if (i==n/2+1 || j==n/2+1){
             printf("\t*");
            }


        else {
            printf("\t ");
        }
    }
        printf("\n");
    }
    return 0;
}