//  Fabonacci Series = 0,1,1,2,3,5,8,13,21,34,55,89,144
#include <stdio.h>
int main() {
    int a=0,b=1,c;
    printf("%d %d ",a,b);
    for(int i=0;i<10;i++) {
        c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
    }
}