
#include <stdio.h>
int fac(int n1) {
    if (n1==1 || n1==0) {
        return 1;
    }
    else    {return n1*fac(n1-1);}
}
int main() {
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int f=fac(n);
    printf("%d",f);
}