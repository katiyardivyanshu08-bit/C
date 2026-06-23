//Ques : WAP to print odd numbers from 1 to 100.
#include <stdio.h>
int main()
{ system("cls");
    int i;
    for (i=1;i<=100;i++){
        if (i%2==0) {continue;}// continue means escape a number 
        printf("%d ",i);
    }
    return 0;
}
