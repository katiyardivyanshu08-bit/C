// Power
#include <stdio.h>
int powe(int x,int y){
        if(y==0) return 1;
return    x*powe(x,y-1); //for 98 calls ==>98
}
int main() {
    int n,a;
    printf("Enter a number n : ");
 scanf("%d",&n);
    printf("Enter a Power a : ");
 scanf("%d",&a);
 
 int p=powe(n,a);
 printf("%d",p);
 return 0;
} 
// sum of digit

// #include <stdio.h>
// int add(int x){
//     int r=x%10;
//     x=x/10; // printf("%d",235/10);==23
//     if (r!=0){
//     return r+add(x);
//     }}

// int main() {
//   int n;
//   printf("Enter a number : ");
//     scanf("%d",&n);
//  int a=add(n);
//  printf("%d",a);

//     return 0;
    
// }