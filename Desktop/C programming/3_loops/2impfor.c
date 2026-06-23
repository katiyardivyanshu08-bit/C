//Ques : Display this AP - 100,97,94,..upto all terms which are positive.

#include <stdio.h>
int main()
{ system("cls");
    int i,n,a;
    printf("Enter a number : ");scanf("%d",&n);
    a=100;
    for(i=1;a>0 ;i++){
        printf("%d ",a);
        a=a-3;
    }

    return 0;
}
