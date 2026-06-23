#include <stdio.h>
int main()
{ system("cls");
    int n,k;
    scanf("%d",&n);

    
    for(int i=1;i<=n;i++){        //rows
        for(int j=1;j<=n;j++) {   //column

            printf("*");//printf("%d",j); (1 2 3 4)
        }
        printf("\n");
    }
    return 0;
}