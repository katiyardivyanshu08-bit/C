#include <stdio.h>
int main()
{ system("cls");
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){ 
        
        int d=i-1;
        for(int q=1;q+i<=n;q++){
            printf(" ");}
        
        
           for(int j=1;j<=i;j++) {
             printf("%d",j);
             
           }
           for(int k=1;k<=i-1;k++){
            printf("%d",d);
            d--;
           }
            

        printf("\n");
    }
    return 0;
}