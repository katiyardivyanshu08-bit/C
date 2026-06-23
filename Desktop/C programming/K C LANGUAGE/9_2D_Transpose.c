#include <stdio.h>
int main() {
     printf("Enter order of arr. A :");
    int n,m;
    scanf("%d%d",&n,&m);
    int A[n][m];
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) { 
            printf("Enter value for arr. A[%d][%d] :",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("Array A: \n");
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) { 
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
printf("\n");
for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) { 
            printf("%d ",A[j][i]);  // Transpose of Square Matrix
        }
        printf("\n");
    }
}