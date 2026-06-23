#include <stdio.h>
int main()
{ system("cls");
    int a,b;
    printf("Enter your row and colomn :\n");
    scanf("%d%d",&a,&b);
    int arr[a][b];
    printf("ENter your Matrix  :\n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Your Matrix is :\n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("\t%d",arr[i][j]);
        }
        printf("\n");
    }

     return 0;
}
