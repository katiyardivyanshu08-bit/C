#include <stdio.h>
int main () {
    //int arr[2][3]={1,2,3,4,5,6};
    printf("Enter order of array :");
    int m,n;
    scanf("%d%d",&m,&n);
    int arr[m][n];
    for (int i=0;i<m;i++) {
        for (int j=0;j<n;j++) { 
            printf("Enter value for arr[%d][%d] :",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for (int i=0;i<m;i++) {
        printf("\t");
        for (int j=0;j<n;j++) { 
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < m; i++) // i=row
    {
        int s=0;
        for (int j=0;j<n;j++) {  // j=column
            s=s+arr[i][j];
        }
        printf("Sum of row %d = %d\n",i+1,s);
    }
printf("\n");
    
    for (int i=0;i<n;i++) {
        int s1=0;
        for (int j=0;j<m;j++) {
            s1=s1+arr[j][i];
        }
        printf("Sum of col %d = %d\n",i+1,s1);
    }
}