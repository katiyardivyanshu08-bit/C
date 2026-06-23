// Recursion = It is a special type of func. in which we call that function in its body.
// RECURSION = When a fn. calls itself repeatedly.
// Need = 

// Given code print n to 1 backwards
#include <stdio.h>
void display(int n) {
    if (n==0) { //base condition
        return; // This is void func. that do not returns value
    }
    printf("%d  ",n);
    display(n-1);
}
// Display 1 to 15
void display1(int a){
    if (a==0) {
        return;
    }
    display1(a-1);
    printf("%d  ",a);
}
int main() {
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    display(n);
    printf("\n");
    display1(n);

}

// break statement used in loop or switch
