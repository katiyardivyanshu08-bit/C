#include <stdio.h>

#include <math.h>


int main() {
int a,b,c;
    scanf("%d",&a);
    if(a<500){ printf("Discount: Rs. 0\nPayable Amount: Rs. %d",a);}
    else if( a>=2000){
         b=(a*25)/100;
         c=a-b;
        printf("Discount: Rs. %d\nPayable Amount: Rs. %d",b,c);}
       
    return 0;
}
