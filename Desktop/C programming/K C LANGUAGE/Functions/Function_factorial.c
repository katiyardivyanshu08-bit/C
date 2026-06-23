#include <stdio.h>

void sq(int s);

void fact(int n1){
    long long f=1;
    while (n1>0) {
        f=f*n1;
        n1=n1-1;
    }
    printf("%d",f);
    sq(f);
}
// Square of factorial
void sq(int s){
    printf("\n");
    printf("%d",s*s);
}

int main() {
    int n;
    printf("Enter a no. ");
    scanf("%d",&n);
    fact(n);
}

