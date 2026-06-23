#include <stdio.h>
int main()
{ system("cls");
    int n,k;
    scanf("%d",&n);
 for(int i=n;i>=0;i--){        //rows
        for(int j=1;j<=i;j++) {   //column
            
            printf("\t");//printf("%d",j); (1 2 3 4)
        }
        printf("\n");
    }
    
    return 0;
}