    //float a=2;
    //printf("%.1f",a); upto 1 decimal point
    //printf("%.2f",a); upto 2 decimals point

// 2. float v/s double --- float is similar to double
#include <stdio.h>
int main() {
    //To store decimals(floating point numbers), C provides 2 DTs - float & double
    double a=32.64;
    // printf("%f",a); WRONG STATEMENT
    printf("Value of double DT is %lf \n",a); // format specifier(placeholder for values) for double is %lf
    /* Diff. b/w float & double => float uses less storage in the memory,but it is not precise as double(DT).It means calculations by float are faster than double(results are less accurate in terms of the decimal digits). */
    // float stores 7 decimal digits, while double can hold 15 decimal digits.
    printf("\n");
    int n=7;
    int f=1;
    while (n>0) {
        f=f*n;
        n--;
    }
    printf("%d",f);
}