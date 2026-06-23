#include <stdio.h>
int add(int n) {
    if(n==0){return;}
    int sum=n+add(n-1);
    return sum;
}

int main() {
    system("cls");
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
  int addi=  add(num);
  printf("%d",addi);
    
    return 0;
}