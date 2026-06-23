// Whitespace = at the time of I/P when we press enter key then \n char. used.

// Task = Display some text
// As with scanf(), in string , we can take text as input but scanf reads only 1 word and doesn't read remaining words (b/c of spaces in b/w words). B/c scanf() read characters until it find whitespace(space or newline chr.) as it assumes the next word belongs to the next variable.

#include <stdio.h>
int main()
{
    // char str[50]; // We specified/defined/described the size of arr.
    // printf("Enter some text\n");
    // scanf("%s", str); No need of ampersand symbol before the var. name in scanf() b/c the var. is a char array(str).
    // printf("%s", str);
    // printf("\n");
    // printf("\n");

    // To solve this issue, we use fgets() fn. which displays all words.
    /* It's syntax is : fgets(string name,required no. of characters,stdin);
    It has 3 parts--
    1st part= var.(str) name    2nd part= how many characters do you want to read      3rd part= stdin keyword */
    // But there is a problem with fgets(), it doesn't  remove whitespace while taking i/p means it include \n in str while pressing enter key.
    printf("Enter some text:");
    char name[85]; 
    // fgets(name, 10, stdin); (10-1) = 9 characters read b/c The last 1 byte is always reserved for the null terminator '\0' at the end of the string.
    fgets(name,18,stdin);
    printf(name); // fgets() does not skip whitespace and reads \n that's why it contains next  o/p in newline.
    printf("Catch you later");
    printf("\n");

    // So, we use scanf() fn. with special way -- scanf(" %[^\n]%*c", name);

    // char nam[50];
    //  scanf(" %[^\n]%*c", nam);//This is correct
    //  printf("Hi %s How have you been?",nam);
    //  printf("See you soon");

/* I entered input - Hey what's going? 
So o/p comes - 
Hey, whaCatch you later
Hi at's going? How have you been?See you soon
IT MEANS C DOES NOT EXECUTES CODE LINE BY LINE WHILE PYTHON EXECUTES CODE LINE BY LINE(C is a compiled language,the whole program is converted into machine code first,
and then the computer runs that machine code, not the C lines one by one. While Python is an interpreted language.)
*/
    
    // char s[1000];
    // fgets(s,1000,stdin);
    // printf("%s",s);
    // //printf("%s",s[1]);  WRONG STATEMENT b/c s[1] is a char.
    // printf("%c",s[2]);
}