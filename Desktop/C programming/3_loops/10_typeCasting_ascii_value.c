#include <stdio.h>
int main() {
    system("cls");
    char a='A';
    printf("%c\n",a);
    int x=(int)a;// TYPE CASTING
    printf("%d\n",x);

    
    for (int i = 65; i <= 90; i++) {
     char a=(char)i;
     printf("%c ->",a);
     printf("%d\n",i);
    }


    // for (int i = 65; i <= 90; i++) {
    //   printf("%d is the Ascii value of  : %c\n",i,i);
    // }
    return 0;
}
