#include <stdio.h>
int main(){
    system("cls");
    int n;
    scanf("%d",&n);
    int nst=n;
      int nsp=1;
    int j;

    for( j=1;j<=(n*2)+1;j++){printf("%d",j);}
    printf("\n");


    for(int i=1;i<=n;i++){ 
        int a=1; 
        for(int j=1;j<=nst;j++) {   
            printf("%d",a);
            a++;
          }

        for(int k=1;k<=nsp;k++){
            printf(" ");
            a++;
        }  
        for(int l=1;l<=nst;l++){
            printf("%d",a);
            a++;
        }  
            nst--;
            nsp+=2;
       
      
        printf("\n");
     }
    
    return 0;
}