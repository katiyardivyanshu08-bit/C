#include <stdio.h>
int main()
{ system("cls");
    int i,n,a;
    scanf("%d",&n);
    //scanf("%d",&k);
    for(int i=1;i<=n;i++){ 
        a=1;       //rows
        for(int j=1;j<=n;j++) {   //column
            
            printf("\t%d",a);//printf("%d",j); (1 2 3 4)
            a=a+2;
        }
        printf("\n");
    }
    return 0;
}