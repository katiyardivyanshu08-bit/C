#include <stdio.h>
int fibo(int x){
        if(x==1 ||x==2) return 1;
return  fibo(x-1)+fibo(x-2);  
}
int main() {
    system("cls");  
    int n,a;
    printf("Enter a number n : ");
 scanf("%d",&n);
    
 int p=fibo(n);
 printf("%d",p);
 return 0;
} 
