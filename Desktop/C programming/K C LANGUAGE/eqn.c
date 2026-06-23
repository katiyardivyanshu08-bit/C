//  x+x2+x3+...x10
#include <stdio.h>
int main() {
    int n=5,x=2;
    int s=0;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=i;j++)
        s=s+x*j;
    }
 printf("%d",s);
}