#include <stdio.h>

void greet(int n) {
    if(n==0){return;}
    printf("Good morning\n");
    greet(n-1);
        
}


int main() {
    system("cls");
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    greet(num);
    return 0;
}
