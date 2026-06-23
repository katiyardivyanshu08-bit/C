#include <stdio.h>
int main()
{ system("cls");
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){ 
            int a=1; 
        for(int j=1;i+j<=n;j++) {   
            printf(" ");
          } 
        for(int k=1;k<=(2*i)-1;k++) {
          
            printf("%c",64+a);
            a++;
            } 

        printf("\n");
    }
    return 0;
}