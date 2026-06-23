#include <stdio.h>
int main()
{    /*
        int n1,n2,ch,res;
        scanf("%d %d",&n1,&n2);
        printf("Enter choices: \n 1 for add \n 2 for subtract \n 3 for multiply \n 4 for divide");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
             res=n1+n2;
              //break;
            case 2:
                res=n1-n2;
                //break;
            case 3:

                res=n1*n2;
                //break;
            case 4:
                res=n1/n2;
                //break;
            default:
                printf("Incorrect Choice");
                //exit(0);
        }
        printf("Result is %d",res); */

// if there is no break statement in each case body,then all statements will be executed even if their value doesn't match with the variable's value and last statement will be printed (that is res=n1/n2 for this code).
// This type of behavior is c/d fall-through.It usually occurs due to errors,when the programmer forgots to add the break statements for each case.

// Check this code by removing break one by one.
int x = 5;
    switch (x)
    {
    case 0:
        x = 10;
        printf("%d", x);
        break;
    case 1:
        x = 20;
        printf("%d", x);
        break;
    default:
        printf("ok");
        break;
    case 2:
        x = 30;
        printf("%d", x);
    // break;
    case 3:
        x = 40;
        printf("%d", x);
        break;
    }
}
    