#include <stdio.h>
#include <stdbool.h>
int main() {
    system("cls");
   typedef  struct data{
        int day;
        int month;
        int year;
    } date;
    date a,b;

    a.day=5;
    a.month=5;
    a.year=1995;

    b.day=1;
    b.month=5;
    b.year=1995;
  
    bool flag=true;
    if(a.day!=b.day) flag =false;
    if(a.month!=b.month) flag =false;
    if(a.year!=b.year) flag =false;

    if (flag==true) printf("the date are same ");
    else printf("the date are different \n ");
    
    b=a;                  // important
    printf("%d ",b.day);


    return 0;
}