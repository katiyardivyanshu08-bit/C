#include <stdio.h>
int power(int a,int b){
    
    if (b==0) {
        return 1;
    }
    return a*power(a,b-1);
}
int main() {
    int a,b;
    printf("Enter base: ");
    scanf("%d",&a);
    printf("Enter Exponent: ");
    scanf("%d",&b);
    int res=power(a,b);
    printf("Ans = %d",res);
}