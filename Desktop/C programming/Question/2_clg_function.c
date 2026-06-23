#include <stdio.h>
 // strlen() function yaha se aata hai

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);   // (unsafe but simple for learning)

    int length = strlen(str);  // string length nikalta hai

    printf("Length of string = %d", length);
    return 0;
}
