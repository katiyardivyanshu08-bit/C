#include <stdio.h>
int main()
{ system("cls");
    int i,n,j;
    scanf("%d",&n);
    //scanf("%d",&k);
    
    for(int i=1;i<=n;i++){ 
      int a=1;
      int b=65;
        if (i%2!=0){  for(int j=1;j<=i;j++) {   
          printf("\t%d",a);
          a=a+1;
            
        }}      
      else { for(int j=0;j<i;j++) {   
          printf("\t%c",b);
          b=b+1;
            
        }}
        printf("\n");
    }
    return 0;
}