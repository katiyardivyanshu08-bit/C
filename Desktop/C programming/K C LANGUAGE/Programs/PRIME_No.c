// PRIME NUMBER
#include <stdio.h>
int main() {
    printf("Enter a no.");
    int n,t=-1;
    scanf("%d",&n);
    if (n==1 || n==0) printf("Not a prime no.");
    else {
        for(int i=2;i<n;i++){
            if (n%i==0){
            printf("Not a prime no.");
            t=0;
            break;}
        }
        if (t==-1)
        printf("Prime No.");
    }
}

