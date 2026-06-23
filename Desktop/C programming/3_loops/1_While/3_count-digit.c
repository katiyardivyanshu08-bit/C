#include <stdio.h>
int main()
{ system("cls");
    int n,count;
    printf("Enter a number : ");scanf("%d",&n);
    count=0;
    while (n!=0){
        n=n/10; //1235/10=123, 123/10=12 .....because of using int
        count++;
    }
    printf("The number of digit are : %d",count);
    return 0;
}
