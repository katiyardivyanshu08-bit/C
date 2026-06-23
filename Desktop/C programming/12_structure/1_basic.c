//Structure=>datatype(custom data type)
//used to store elements of different data types in a single variable.
#include <stdio.h>
int main() {
    struct student{
        int rollN;
        char grade;
        float marks;
    };
   struct  student s1;
   s1.rollN=1;
   s1.grade='A';
   s1.marks=90.65;
   
   printf("%d \n%c \n%f",s1.rollN,s1.grade,s1.marks);
   
    return 0;
}