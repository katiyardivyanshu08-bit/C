#include <stdio.h>

int sum(int n1,int n2,int n3){
    int s;
    s=n1+n2+n3;
    printf("Sum = %d\n",s);
    return s;
}
void loop(int a) {
    for (int i=1;i<=a;i++) {
        printf("%d\n",i);
    }
}
int main() {
    printf("Enter 3 numbers: ");
    int n1,n2,n3,a;
    scanf("%d%d%d",&n1,&n2,&n3);
    a=sum(n1,n2,n3);
    loop(a);
}