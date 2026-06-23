#include <stdio.h>
int sum(int n1){
    int r=n1%10; // printf("%d",0%10) = 0
    n1=n1/10; // printf("%d",235/10) = 23
    if (r!=0){
    return r+sum(n1);
    }
}
int main(){
    system("cls");
    int n; //235
    printf("Enter a no. ");
    scanf("%d",&n);
    int res=sum(n);
    printf("Sum = %d",res);
}
