#include <stdio.h>
int main()
{ system("cls");
    int i,n;
    int count=0;
    printf("Enter a number : ");scanf("%d",&n);
    int a=0;
    for(i=2;i<=n-1;i=i+1){
        if(n%i==0){
            count=1;
            break;
        }
     
        
    }
    if (count==0) printf(" prime");
    else printf("not prime");
 
    return 0;
}