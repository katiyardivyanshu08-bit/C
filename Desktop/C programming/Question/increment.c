#include <stdio.h>
int main()
{ system("cls");
    int x = 10, y, z ;
/*y = --x ;      //x ke box m minus karke value dalo fir y ki value likho,x=5,y=5
z = x-- ;       //z ke box m x ki value dalo fir x ke box mai minus karo,z=5,x=4   (x=4,y=5,z=5)
printf("\n%d %d %d", x, y, z ) ;   */
y = ++x ;
z = --x ;
printf("\n%d %d %d", x, y, z ) ; 

    return 0;
}
