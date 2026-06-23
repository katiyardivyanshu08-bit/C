//Structure=>datatype(custom data type)
//used to store elements of different data types in a single variable.
#include <stdio.h>
int main() {
   system("cls");
   
   // typedef use to change  any name  of particular data 
   struct Employe{
        int ID;
        char Grade;
        float Salary;
    };
    typedef struct Employe Q; // typedef oldname newname;
 Q E1={1,'A',100000};
//   E1.ID=1;
//   E1. Grade='A';
//   E1.Salary=100000;
   
   struct  Employe E2;
   E2.ID=1;
   E2. Grade='B';
   E2.Salary=50000;
   
//    struct  Employe E3;
//    E3.ID=1;
//    E3. Grade='A';
//    E3.Salary=250000;
   
   printf("Employe 1 :\nID : %d \nGrade : %c \nSalary : %.2f\n\n",E1.ID,E1. Grade,E1.Salary);
   
  printf("Employe 2 :\nID : %d \nGrade : %c \nSalary : %.2f\n\n",E2.ID,E2. Grade,E2.Salary);
   
//    printf("Employe 3 :\nID : %d \nGrade : %c \nSalary : %.2f",E3.ID,E2. Grade,E3.Salary);
   
    return 0;
}