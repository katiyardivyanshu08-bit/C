#include <stdio.h>
int main() {
    system("cls");
    
    int n,count;
    count=0;
    
    printf("Enter number : ");
    scanf("%d", &n);
    

    for(; n>=0; n/=10) {
count++;
    } printf("%d ",count);

    return 0;
}
