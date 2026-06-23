#include <stdio.h>
void dis(int a) {
    if(a==1) return;
    printf("Hii ");
    dis(a-1);
    printf("Good  ");
}
int main() {
    dis(4);
}