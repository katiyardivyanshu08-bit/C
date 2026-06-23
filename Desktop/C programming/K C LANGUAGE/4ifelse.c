/* Logical Operators
not = !  (reverses the cond. like !(age<18) reads as age is not less than 18)
and = &&
or = ||

If I have a single statement to write in the body of if/else/while/for etc. We don't need to write curly braces
*/
// We don't use semicolon in if else statement.
// Syntax of if => if(cond.) { ... }
//Note: if cond. is enclosed in parentheses and it's code is encolsed in curly braces

#include <stdio.h>
int main()
{
    int n1 = 9, n2 = 0;
    if (n1 >= 1 && n1 <= 9) // only numbers b/w 1 and 9 (inclusive)
    {
        printf("n1 is ok\n");
    }
    if (n2 >= 1 || n2 <= 9) // all integers
    {
        printf("n2 is ok");
    }
    /*  int n=10-1; // You can assign a value like this statement
      if (n>0) {
          printf("+ve no.");
      }
      else if (n==0) { //like elif in python
          printf("%d",0);
      }
      else {
          printf("-ve");
      } */
     
    /*
    int n1, n2, n3;
    printf("Enter 3 numbers:");
    scanf(" %d %d %d", &n1, &n2, &n3);


    if (n1 > n2)
    {
        if (n1 > n3)
        {
            printf("%d is the greatest no.", n1);
        }
        else
        {
            printf("%d is the greatest no.", n3);
        }
    }
    else
    {
        // printf(" %d is greater than %d",b,a);
        if (n2 > n3)
        {
            printf("%d is the greatest no.", n2);
        }
        else
        {
            printf("%d is the greatest no.", n3);
        }
    } */
}
// We have 6 relational(comparison) operators like python