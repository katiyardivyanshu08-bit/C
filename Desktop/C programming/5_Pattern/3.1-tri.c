#include <stdio.h>
int main()
{ system("cls");
    int i,n,t;
    scanf("%d",&n);
    //scanf("%d",&k);
    
    for(int i=1;i<=n;i++){ 
        
        t=1;      
        for(int j=1;j<=i;j++) {   
            
            printf("\t%d",t);
            t=t+2;
            
        }
        printf("\n");
    }
    return 0;
}