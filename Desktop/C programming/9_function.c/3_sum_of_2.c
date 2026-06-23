#include <stdio.h>
int add(int x,int y){
     return x+y;
}

int main()
{system("cls");
    int a,b;
    printf("Enter a number:");
    scanf("%d %d",&a,&b);
    int sum=add(a,b); // formal prameters a,b   value a,b(2,3) actual parameters
    printf("%d",sum);
    return 0;
}
