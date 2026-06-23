#include <stdio.h>
int main() 
{   system("cls");
    int a,b;
    printf(" Enter a : ");
    scanf("%d", &a);
    printf(" Enter b : ");
    scanf("%d", &b);

    // int temp =a;               //a=2,b=5, temp=a (temp=2)
    // a=b;                       //a=b;     a=5; 
    // b=temp;                    //b=temp   b=2    a=5,b=2,temp=2

    //or

    a=a+b;
    b=a-b;
    a=a-b;
    printf("The value a: %d\nThe value b: %d",a,b);                 
    
  
    return 0;
}
                 
               