/* Need of 2D arr. = 
*/
#include <stdio.h>
int main() {
    // Create 2D array
    int arr[2][3]; // This is a multidimensional arr.(2D) which contains 2 single-dimension arr. and each arr. has 3 elements
    // for (int i=0;i<2;i++) {
    //     for (int j=0;j<3;j++) { 
    //         printf("Enter element :");
    //         scanf("%d",&arr[i][j]);
    //     }
    // }
    // printf("Array : \n");
    // for (int i=0;i<2;i++) {
    //     for (int j=0;j<3;j++) { 
    //         printf("%d ",arr[i][j]);
    //     }
    //     printf("\n");
    // }

    // ADDITION OF ARRAYS
    // Array A
    printf("Enter order of arr. A :");
    int n,m;
    scanf("%d%d",&n,&m);
    int A[n][m];
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) { 
            printf("Enter value for arr[%d][%d] :",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("Array A: \n");
    for (int i=0;i<n;i++) {
        printf("\t");
        for (int j=0;j<m;j++) { 
            printf("%d  ",A[i][j]);
        }
        printf("\n");
    }
printf("\n");
    // Array B
    printf("Array B: \n");
    int B[n][m];
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) { 
            printf("Enter value for arr[%d][%d] :",i,j);
            scanf("%d",&B[i][j]);
        }
    }
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) { 
            printf("%d  ",B[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    // Program for addition C=A+B
    printf("Array C: \n");
    int C[n][m];
    int D[n][m];
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) { 
            C[i][j]=A[i][j]+B[i][j];
            D[i][j]=A[i][j]-B[i][j];
        }
    }
     for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) { 
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
    // Program for subtraction D=A-B
    printf("Array D: \n");
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) { 
            printf("%d  ",D[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}  