#include <stdio.h>
int poweLog(int x,int y){
        if(y==1) return x;
        else if(y==0) return 1;
         int a=poweLog(x,y/2);   //for 8 calls 3
         
        if (y%2==0) return a*a;
        else  return a*a*x;
       

}
int main() {
    system("cls");  

    int n,a;
    printf("Enter a number n : ");
 scanf("%d",&n);
    printf("Enter a Power a : ");
 scanf("%d",&a);
 
 int p=poweLog(n,a);
 printf("%d",p);
 return 0;
} 