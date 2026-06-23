#include <stdio.h>
int main() {
    system("cls");
    
    int n, i,s,ld;
    
    printf("Enter number : ");
    scanf("%d", &n);int arr[n]; 
    s=0;

    for(i = 0; i < n; i++) {
        ld=n%10;
        s+=ld;
        n/=10;

    } printf("%d ",s);

    return 0;
}
