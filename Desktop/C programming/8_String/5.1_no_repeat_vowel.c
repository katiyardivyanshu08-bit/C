
#include <stdio.h>

int main()
{
    system("cls");

    char str[100];
    fgets(str, sizeof(str), stdin);

    int i, j;
    int vowel = 0, conso = 0;
    int repeat;

    for(i = 0; str[i] != '\0'; i++)
    {
        // ✅ Capital → Small
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;

        repeat = 0;

        // ✅ Check repeat
        for(j = 0; j < i; j++)
        {
            if(str[i] == str[j])
            {
                repeat = 1;
                break;
            }
        }

        // ✅ Count only if not repeated
        if(repeat == 0)
        {
            if (str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
            {
                vowel++;
            }
            else if (str[i] >= 'a' && str[i] <= 'z')
            {
                conso++;
            }
        }
    }

    printf("Your vowels %d\n", vowel);
    printf("Your consonent %d\n", conso);

    return 0;
}
