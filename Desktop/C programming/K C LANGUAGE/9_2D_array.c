// Filling of elements = Left to right Top to bottom 
#include <stdio.h>
int main() {
    int arr[3][2]={1,2,3,4,5,6};
    for (int i=0;i<3;i++) {
        for( int j=0; j<2;j++) {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    // printf("%d",arr[1]); // Garbage Value
    // printf("%d",arr[0][2]); // Garbage Value
    printf("\n\n");
    int arr1[2][2]={(1,2),(2,3)};
    printf("%d\n",arr1[0][1]);
    int arr2[2][2]={{1,1},{2,3}};
    printf("%d",arr2[0][1]);
}
