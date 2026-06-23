#include <stdio.h>
int main()
{
    int n1, n2, ch, res;
    printf("Enter 2 numbers:");
    scanf("%d %d", &n1, &n2);
    printf("Enter choices: \n 1 for add \n 2 for subtract \n 3 for multiply \n 4 for divide");
    scanf("%d", &ch);
    // switch used when we have more than 2 choices like dice a role
    // it's syntax => switch(any case value){ ... }
    // case value:
    // We don't use semicolon in switch statement.
    // case statement uses colon.
    // We can use or not curly braces in case statement a/c to  choice
    // When switch variable's value = case value, then the code inside case is executed until the break is reached.
    // The break statment is used to terminate the switch.
    switch (ch)
    {
    case 1:
        res = n1 + n2;
        break;

    case 2:
        res = n1 - n2;
        break;
    case 3:
    {
        res = n1 * n2;
        break;
    }
    case 4:
    {
        res = n1 / n2;
        break;
    }
        // There is default case at the end of switch statement which is used to run code when none of the cases match
        // No break statement is needed in default case b/c it is always last statement of switch
    default:
        printf("Incorrect Choice");
        exit(0);
    }
    printf("Result is %d", res);
}
// Suppose if I give the wrong choice for case statement then we get error. To remove it, change below statements.
/* int n1,n2,ch,res=-9(any no. to check the cond.);
     if (res!=-9)
    {
    printf("Result is %d",res);
    } */
// If you don't change any statement, then your output will be like this
// Incorrect ChoiceResult is 2256896(random no. will be printed = garbage value)
// Another method is write exit(0); statement in the body of default
/* For this code,
if we remove the all break statements and exit(0) statement, then output is like this "Incorrect ChoiceResult is 0"
if we remove all break statements but does not remove exit statement then o/p is "Incorrect Choice". It means exit like a return statement b/c printf() which is inside the body of main() fn. is not showing o/p  */
