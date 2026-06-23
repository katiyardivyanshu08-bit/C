//PASS BY REFFERENCE (address passing instead of value}
#include <stdio.h>
void swap(int* x,int* y){ 
    int temp=*x;
    *x=*y;
    *y=temp;
    return;
}   
int main() {
    system("cls");
    int a,b;
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("a : %d\nb : %d",a,b);
    return 0;
}
//not working

// #include <stdio.h>
// void swap(int x,int y){ //x and y are differnt box
//     int temp=x;
//     x=y;
//     y=temp;
//     return;
// }
// int main() {
//     system("cls");
//     int a,b;
//     scanf("%d %d",&a,&b);
//     swap(a,b);
//     printf("a : %d\nb : %d",a,b);
//     return 0;
// }