#include <stdio.h>
int main()
{ system("cls");
    int n,a,l;
    scanf("%d",&n);
    a=65;
   for(int i=1;i<=n;i++){
    
for(int j=1;i+j<=n;j++){
    printf(" ");
}
for(int k=1;k<=i;k++){
    printf("%c",64+k);
} 
for( l = i - 1; l > 0; l--){
    printf("%c",64+l);
    
    
}
printf("\n");
   }
    return 0;
}