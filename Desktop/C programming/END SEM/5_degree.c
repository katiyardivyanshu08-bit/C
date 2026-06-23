#include <stdio.h>

int main() {
    system("cls");
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
   printf("Transpose of a matrix \n");
   for(int i=0;i<a;i++){
        for(int j=b;j>=0;j--){
            printf("\t%d",arr[j][i]);
             
        }printf("\n");
   }
   
    
    return 0;
}