#include <stdio.h>
int main() {
    int n;
    // printf("Enter the size of array:");
    // scanf("%d",&n);
    int arr[]={4,1,6,8,2};
    // for (int i=0;i<n;i++) {
    //     printf("Enter element at position %d :",i);
    //     scanf("%d",&arr[i]);
    // }
    printf("Array elements are ");
    for (int i=0;i<(n=5);i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");
    /* Sort the array in descending form 
    if arr = [4,1,6,8,2] then it should be [8,6,4,2,1]  */
    int m0=0;
    for (int i=0;i<n;i++) {
        if (arr[i]>m0) { 
            m0=arr[i];
        }
    }
    printf("max element= %d",m0);

}
