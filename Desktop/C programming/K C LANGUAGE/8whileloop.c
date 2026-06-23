// while loop takes a cond. & repeats its statements until the cond. is false

#include <stdio.h>
int main()
{
    int n=1;
    while (n<5) {
        printf("%d\n",n);
       // n=n+1;
       n++;
       }   printf("\n");
    /*while (1) { // Always True
        printf('k');// Infinite Loop
    }*/
    
// Another variation of while loop is do while
    int num=01;   // num=01 is wrong statement in .py but here is correct
    printf("do while -\n");
    do {
        printf("%d\n",num);
        num+=3;
    }
    while (num<10); //Note the semicolon after the while cond.
// In do while loop,the cond. is checked after the code execution means the code in the do is executed atleast one time even if the cond. is not satisfied.
}