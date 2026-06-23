// UNIVERSAL PROGRAM TO CAL. SUM OF DIGITS OF A NO.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {    
    // Using while loop
    //     int n,s=0,r;
    //     printf("Enter a no.");
    //     scanf("%d",&n);
    //     while (n!=0){
    //         r=n%10;
    //         n=n/10;
    //         s=s+r;
    //     }
    // printf("Sum = %d",s);

    // Using for loop
    int n,s=0,r;
    printf("Enter a no.");
    scanf("%d", &n);
    int c=0;
    for(int i=n;i!=0;i=i/10) {
        r=i%10;
        s=s+r;
        c=c+1;
    }
    printf("Sum of no.= %d\n",s);
    printf("No. of digits=%d",c);
}
