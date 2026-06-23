#include <stdio.h>
 int main() {
      int n;
      scanf("%d",&n);
      int arr[n];
      for (int i=0;i<n;i++){
         scanf("%d",&arr[i]); }
      int f=arr[0];
      int l=arr[n-1];
      arr[0]=l;
      arr[n-1]=f;
      for (int i=0;i<n;i++) {
         printf("%d ",arr[i]);
}
}