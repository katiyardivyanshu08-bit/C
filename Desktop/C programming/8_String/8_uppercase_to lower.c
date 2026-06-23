#include <stdio.h>

int main()
{system("cls");
    char str[100];
    fgets(str, sizeof(str), stdin);

    int i;

    for(i = 0; str[i] != '\0'; i++)
    {
        // ✅ agar lowercase hai to uppercase bana do
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
    }

    printf("Uppercase String: %s", str);

    return 0;
}
