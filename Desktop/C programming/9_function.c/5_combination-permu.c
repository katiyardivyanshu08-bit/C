#include <stdio.h>
int factorial(int x){
    int fact=1;
    for(int i=1;i<=x;i++){fact*=i;}
    return fact;
}
int combination(int n,int r){ //f(x,y)arguments
   return factorial(n)/(factorial(r)*factorial(n-r));
}
int main()
{ system("cls");
    int n,r,ncr,fact,a,b,c;
    printf("Enter n : ");scanf("%d",&n);
    printf("Enter r : ");scanf("%d",&r);
     ncr=combination(n,r);
    printf("%d",ncr);

    // a=factorial(n);
    // b=factorial(r);
    // c=factorial(n-r);
    // ncr=a/(b*c);
    // ncr=factorial(n)/(factorial(r)*factorial(n-r));
    // printf("%d",ncr);
    return 0;}

/* 
include <stdio.h>
int main()
{ system("cls");
    int n,r,i,N,R,M,ncr;
    N=1,R=1,M=1;
    printf("Enter n : ");scanf("%d",&n);
    printf("Enter r : ");scanf("%d",&r);
    for(i=1;i<=n;i++){N*=i;}
    for(i=1;i<=r;i++){R*=i;}
    for(i=1;i<=n-r;i++){M*=i;}
    ncr=N/(R*(M));
    printf("%d",ncr);
    return 0;}
*/
