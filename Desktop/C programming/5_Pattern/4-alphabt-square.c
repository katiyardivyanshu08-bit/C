#include <stdio.h>
int main()
{ system("cls");
    int i,n,j;
    scanf("%d",&n);
    //scanf("%d",&k);
    
    for(int i=1;i<=n;i++){ 
              //rows
        for(int j=1;j<n;j++) {   //column
            
            printf("\t%c",64+j);//printf("%d",j); (1 2 3 4)
            
        }
        printf("\n");
    }
    return 0;
}