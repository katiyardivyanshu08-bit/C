#include <stdio.h>

void printReverse(int n) {
    
    if (n==0 ) { return;}
     printf("%d ", n); 
         printReverse(n - 1);  
    printf("%d ", n); 
    return ;  
}

int main() {
    system("cls");
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printReverse(num);
    return 0;
}


