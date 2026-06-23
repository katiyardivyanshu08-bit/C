#include <stdio.h>
int main() {
    int x=1;
    if (x=2) {
        printf("x is equal to 1");  //it works without giving cond. and x stores 2
    }   
    else {
    printf("x is not equal to 1");
    }
}

// double f=1; 
    // for (int i=1;i<=50;i++){
    //     f=f*i;
    // }
    // printf("%lf",f); This code gives wrong output

    // if (-2>1) it considers only 1st statement
    // printf("ok");printf("error");
    // printf("1");

    // if (-2>1) 
    // printf("ok");printf("error");
    // else 
    // printf("1"); Error

//    for (int i = 0; i < 3; i++) {
//     printf("%d\n", i);
// }
// printf("%d", i); // ❌ Error: i is not declared in this scope
