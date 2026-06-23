#include <stdio.h>
int main()
{
    float l, b, r;
    printf("Enter values:");
    scanf("%f %f %f", &l, &b, &r);
    printf("Area of triangle: %.2f\n", l * b);
    printf("Peri. of triangle:%.2f", 2 * (l + b));
    printf("\nArea of circle=%.2f", 3.14 * r * r);
    printf("\nCircumference of circle=%.2f", 2 * 3.14 * r);

    //     printf("Enter temp. in fahrenheit : ");
    //     float f;
    //     scanf("%f", &f);
    //     // 5/9 is integer division: Both 5 and 9 are integers, so C performs integer division first.
    //     // Make sure at least one of the numbers is a float so that floating-point division is used:
    //     // float c = 5.0/9 * (f - 32);   or      float c = (5.0/9.0) * (f - 32);
    //     float c = 5.0 / 9 * (f - 32);
    //     printf("Temperature in celcius = %f", c);

    /* 4
    int h=1189,w=841;
    for (int i=0;i<9;i++){
        printf("A(%d):%d * %d\n",i,h,w);
        w=h/2;
          h=w; //This is wrong swapping for C b/c here comma is not just a seperator,but also a comma operator(,) which executes code from left to right. In Python, a comma is not an operator,
          // int a=h,h=w,w=a/2;This is wrong method to write
          int a=h;
          h=w;w=a/2;
    } 4 */
}