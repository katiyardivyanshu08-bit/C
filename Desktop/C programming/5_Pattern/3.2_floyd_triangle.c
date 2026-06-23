#include <stdio.h>
int main()
{ system("cls");
    int i,n,t;
    scanf("%d",&n);
    //scanf("%d",&k);
    t=1;
    for(int i=1;i<=n;i++){ 
        
             
        for(int j=1;j<=i;j++) {   
            
            printf("\t%d",t);
            t++;
            
        }
        printf("\n");
    }
    return 0;
}