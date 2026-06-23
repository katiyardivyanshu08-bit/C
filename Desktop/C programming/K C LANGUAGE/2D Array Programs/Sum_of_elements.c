#include <stdio.h>
int main () {
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int s=0;
    for (int i = 0; i < 3; i++) // i=row
    {
        for (int j=0;j<3;j++) {  // j=column
            s=s+arr[i][j];
        }
    }
    printf("Sum = %d",s);
}