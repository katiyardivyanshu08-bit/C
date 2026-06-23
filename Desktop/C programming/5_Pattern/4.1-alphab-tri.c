#include <stdio.h>
int main()
{ system("cls");
    int i,n,j;
    scanf("%d",&n);
    //scanf("%d",&k);
    
    for(int i=1;i<=n;i++){ 
              //rows
        for(int j=0;j<i;j++) {   //column
            
            printf("\t%c",65+j);//printf("%d",j); (1 2 3 4)
            
        }
        printf("\n");
    }
    return 0;
}