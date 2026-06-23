#include <stdio.h>

int main() {
    system("cls");
    char str[100];
    int i, len = 0;
    int flag = 1;

    printf("Enter a string: ");
    scanf("%[^\n]", str);  // input string with spaces

    // calculate length manually
    while(str[len] != '\0') {
        len++;
    }

    // check palindrome
    for(i = 0; i < len/2; i++) {
        if(str[i] != str[len-(1+i)]) {
            flag = 0;  // mismatch found
            break;
        }
    }

    if(flag)
        printf("Palindrome\n");
    else
        printf("Not a Palindrome\n");

    return 0;
}
