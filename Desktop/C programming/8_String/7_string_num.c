#include <stdio.h>
int main()
{ system("cls");
//    int a ='6'-48;
//    printf("%d",a);
 
char str[1000];
printf("Enter a string: ");
if (fgets(str, sizeof str, stdin) == NULL) {
    printf("No input\n");
} else {
    int i = 0;
    /* remove trailing newline if present */
    while (str[i]) {
        if (str[i] == '\n') { str[i] = '\0'; break; }
        i++;
    }
    int len = 0;
    while (str[len]) len++;
    printf("Length: %d\n", len);
}
  
    return 0;
}
