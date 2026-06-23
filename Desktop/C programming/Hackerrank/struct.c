#include <stdio.h>
int main()
{ system("cls");
    struct Emp{
        int ID;
        float Salary;
        char Name[10];
    };
    struct Emp E1={456789,374.3484,"rajat"};
    printf("%d  %.2f  %s",E1.ID,E1.Salary,E1.Name);
    return 0;
}
