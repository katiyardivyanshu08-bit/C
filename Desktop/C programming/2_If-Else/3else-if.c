/*Ques : Take input percentage of a student and
print the Grade according to marks:*/
#include <stdio.h>
int main()
{ system("cls");
    int n;
    printf("Enter your number : "); scanf("%d",&n);
    /*if (n>90) {printf("excellent");}
    else if (n>80) {printf("good");} //else if se niche wali chije nahi chalegi.
    else if (n>70) {printf("fair");}
    else if (n>60) {printf(" bad");}
    else if (n>50) {printf(" very bad");}
    else printf(" fail");*/

    if (n>80) {printf("a grade");}
    else{
         if (n>60) {
            printf("b grade");
                   }
           else {
                if (n>40) {
                    printf("c grade");
                          }
                else {printf("d grade");
                     }
                }
        }
    return 0;
}
