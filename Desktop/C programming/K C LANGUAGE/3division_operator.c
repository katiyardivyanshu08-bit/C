// The division / operator performs differently depending on the data types of the operands.                         When both operands are integers, integer division, (also called truncated division), removes any remainder to result in an integer.
// For example, let's convert the given kilobytes value to megabytes:

#include <stdio.h>

int main()
{
    int kb = 35800;
    int mb = kb / 1024;
    printf("%dmb\n", mb);

    printf("Incorrect = %f", 5 / 9); // O/p = 0.000000
    // 5/9 is integer division: Both 5 and 9 are integers, so C performs integer division first. So, output is 0, but we are using float format specifier.So it converts 0 into 0.000000.
    // To display correct o/p, make sure at least one of the number must be float DT so that floating-point division is used.
    printf("\nCorrect = %f",5.0/9);        
    printf("\nCorrect = %.2f",5/9.0); // Round off number upto 2 decimal places

    // The % remainder operator (also called the modulo) is used to find the remainder of a division.
    // Let's find out how many of 100 items will be left if we divide them into boxes & 1 box should contain 8 items:
    // int items = 100;
    // int per_box = 8;
    // int left_over = items % per_box;
    // printf("%d", left_over);
}
