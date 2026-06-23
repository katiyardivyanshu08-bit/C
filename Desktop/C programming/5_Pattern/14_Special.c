#include <stdio.h>
int main()
{ system("cls");
    /*   *******
         *** ***
         **   **
         *     *         
    */
    int n;
    scanf("%d",&n);
    int nst=n;
      int nsp=1;
    int ml=(n/2)+1;

    for(int j=1;j<=(n*2)+1;j++){printf("*");}
    printf("\n");

    for(int i=1;i<=n;i++){  
        for(int j=1;j<=nst;j++) {   
            printf("*");
          }

        for(int k=1;k<=nsp;k++){
            printf(" ");
        }  
        for(int l=1;l<=nst;l++){
            printf("*");
        }  
            nst--;
            nsp+=2;
       
      
        printf("\n");
     }

    return 0;
}