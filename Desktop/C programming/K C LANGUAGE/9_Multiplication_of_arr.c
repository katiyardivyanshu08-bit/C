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

    printf("Enter no. of elements for arr. B :");
    int k;
    scanf("%d",&k);
    int B[m][k];
    for (int i=0;i<m;i++) {
        for (int j=0;j<k;j++) { 
            printf("Enter value for arr[%d][%d] :",i,j);
            scanf("%d",&B[i][j]);
        }
    }
    printf("Array B: \n");
    for (int i=0;i<m;i++) {
        for (int j=0;j<k;j++) { 
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }
printf("\n");
    // Multiplication-  C=A*B
    int C[n][k];
    for (int i=0;i<n;i++) {
        for (int j=0;j<k;j++){
            int s=0;
            for (int a=0;a<m;a++) { 
                s+=A[i][a]*B[a][j];
            }
            C[i][j]=s; 
        }   
    }
    printf("Array C: \n");
    for (int i=0;i<n;i++) {
        for (int j=0;j<k;j++) { 
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
}