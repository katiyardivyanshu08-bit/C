// pointer=>address ko store karne ke liye
#include <stdio.h>
int main() {
    system("cls");
    int a=5;
    printf("Value of a %d\n",a);
    printf("Address of a %p\n",&a);                    //&a a ka address,%p se bhi address dekhte hai
    int* x;                                           //int* x=&a;
        x=&a;                                        //address store karne liye int*==pointer
    printf("Address of a %p\n",x);                  //x ke andr jo store hai uska address
    printf("Address of pointer %p\n",&x);          //pointer ka address
    printf("Value of a %d\n",*x);                 //pointing the value which address store

    *x=7;      //a ki vlaue chage
    printf("%d",a);
    return 0;
}