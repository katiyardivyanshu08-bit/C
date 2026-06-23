#include <stdio.h>
int main() {
    int n;
    printf("Enter arr. size");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++) {
        printf("Enter element %d=",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");
    // First Greatest No.
    int m=0;
    for (int i=0;i<n;i++) {
        if (arr[i]>m)
        m=arr[i];
    }
    printf("1st Greatest No.= %d",m);
    printf("\n");
    // Second Greatest No.
    int m1=arr[0]; // Compare one ele. of arr. with all elements for 2nd greatest no.
    for( int j=0;j<n;j++) {
        if (arr[j]==m)
        continue;
        if (arr[j]>m1)
        m1=arr[j];
    }
    printf("Second Gratest No. = %d",m1);
}