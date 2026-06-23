#include <stdio.h>
int main() {
     // Take arr. elements through i/p
    int n;
    printf("Enter arr. size: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) {
        printf("Enter element %d:",i+1);
        // scanf("%d ",arr[i]); Wrong
        scanf("%d",&arr[i]);
    }
   // Print array elements
   for (int i=0;i<n;i++) {
    printf("%d ",arr[i]);
   }
   
// ABOVE CODE IS IMPORTANT
}
