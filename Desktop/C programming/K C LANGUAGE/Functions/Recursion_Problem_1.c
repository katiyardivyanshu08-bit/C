#include <stdio.h>

// Sum from 1 to n
int display(int a){
    if (a==0) {
        //return; For non-void func., it must return a value
        return 0;
    }
    else return a+display(a-1);
}
int main() {
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int s=display(n);
    printf("%d",s);
}

// break statement used in loop or switch
