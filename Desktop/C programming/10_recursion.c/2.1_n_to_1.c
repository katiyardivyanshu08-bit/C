// #include <stdio.h>

// void printReverse(int n) {
    
//     if (n==0 ) { return;}
//         // printReverse(n - 1);  // 1 2 3 4 5 
//     printf("%d ", n); 
//        printReverse(n - 1);  // 5 4 3 2 1 
//     return ;  
// }

// int main() {
//     system("cls");
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     printReverse(num);
//     return 0;
// }

#include <stdio.h>

int num(int x){
    if(x<1){return 1;}
    int a=x*num(x-1);
    return a;




}

int main() {
    system("cls");
int n;
scanf("%d",&n);

printf("%d",num(n));

     return 0;
}