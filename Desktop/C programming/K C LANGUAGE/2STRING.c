/* So far, we have been declaring variables that hold numbers/characters. What if we want to store text in a var.?  As we already know, text should be enclosed in double quotes which is c/d str. So, string is actually an array of characters. Each arr. ele. is the corr. chr. of the str.
Format specifier for str. is %s
*/
// A str. always ends with \0 (null chr.) in memory.
#include <stdio.h>
int main()
{ // Method 1 to create str(char arr.)
    char name[] = "Kaif";   // 'K'  'a'  'i'  'f'  '\0'
    //  Size = number of characters + 1
    char text[50] = "A str. is an array of characters."; 
    // printf(text); // Wrong Method to print.
    printf("%s", text); // Correct Method
    printf("\n");

    // Method 2 to create str (char arr.)
    char greeting[6]={'H', 'e', 'l', 'l', 'o', '\0'};   //char greeting[]={'H','e','l','l', 'o', '\0'}; This is also correct.
    char arr1[5]={'k','a','i','f'};//Valid, automatically takes null chr.
    

    char html[50] = "TIM BERNERS LEE";
    int y = 1991;
    printf("HTML is created by %s in %d", html, y);
    printf("\n");
    printf("\n");
    /* In order to insert special characters into the str. like new lines, double quotes, we need to use ESCAPE chr.(\) before special chr.
     */
    char c[] = "#The C programming language was developed in \"1972\" by \"Dennis Ritchie\" at \"Bell Laboratories in the USA\".";
    printf("%s", c);
    printf("\n");
    printf("\n");

    // Declaration of str by giving capacity/size.
    char str[6];
    str[0]='H';
    str[1]='e';
    // str[2] = "y";    ❌ wrong b/c single chr. use single quotes
    str[2] = 'y';   // ✅ correct

    str[3]=' '; // Correct
    // str[4]='How have you been!';  wrong method b/c it takes more than one chr.
    //str[4]="How have you been!";      wrong b/c it takes more than one chr. & double quotes as this is the 5th pos. of chr. and you are assigning str.
    str[4]='!';
    // ⚠️ Important: Add null character at the end
    str[5] = '\0';  // ✅ Without this, printf("%s", str) prints garbage
    // printf(str[4]);      Wrong method
    printf("%c\n",str[4]);  // Correct
    printf("%s",str);
    printf("\n");
    printf("\n");
    printf("Enter something : ");
    char new[50];
    scanf("%s",new);//hi kaif
    printf("%s",new);//hi 
}