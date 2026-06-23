//Structure=>datatype(custom data type)
//used to store elements of different data types in a single variable.
#include <stdio.h>

int main()
{system("cls");
union emp {
       int x;
       int y;
       char z;
      
       
};

 union  emp e;
    e.x= 4;
    e.y= 5;
    e.z= 'h';
    
     
    printf("%d %d %c ", e.x , e.y , e.z);
 


    return 0;
}