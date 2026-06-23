#include <stdio.h>

int main() {
    system("cls");  
    int n,a,b;
    printf("Enter number : ");
    scanf("%d", &a);
    printf("Enter the power : ");
    scanf("%d",&b);
    
int c=1;

    for (int i = 1; i <= b; i++) {
         c*=a;
    }
    printf("%d power %d : %d",a,b,c);

    return 0;
}
