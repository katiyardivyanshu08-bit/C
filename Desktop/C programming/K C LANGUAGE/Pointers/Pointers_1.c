#include <stdio.h>
int main() {
    int a=7,b=3;
    int *p=&a; // Memory address of a
    int *q=&b; // Memory address of b
    p=q; // Memory address of b
    printf("%d %d\n",a,*p);// 7 3
}

