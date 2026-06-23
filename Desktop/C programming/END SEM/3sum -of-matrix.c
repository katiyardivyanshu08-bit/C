#include <stdio.h>

int main() {
   int a,b,add;
   scanf("%d %d",&a ,&b);
   int arr[a][b];
   for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("Enter a number : ");
            scanf("%d",&arr[i][j]);
        }
   }
   for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("\t%d",arr[i][j]);
            
        }printf("\n");
   }
   add=0;
   for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            
           add+=arr[i][j]; 
        };
   }
   printf("sum of matrix = %d",add);
    
    return 0;
}