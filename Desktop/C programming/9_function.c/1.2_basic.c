#include <stdio.h>
int Chemistry(){
    printf("You got 95 marks \n");//6
    return;}//7

int Physics(){
    printf("You got 90 marks \n");//4
    Chemistry();//5
    return;//8
}
int Maths(){
    printf("You got 89 marks \n");//2
    Physics();//3
    return;//9
}

int main()
{system("cls");
    Maths(); //1
    return 0;//10
}
