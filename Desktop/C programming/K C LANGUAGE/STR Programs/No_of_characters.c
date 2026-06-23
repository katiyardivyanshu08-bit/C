/*  char name[10] = "Kaif";
    sizeof(name) → total bytes of the array (10)
    strlen(name) → characters before '\0' (4)
*/
// Count no. of characters in a str
// At the time of input, newline chr. is also included in str. and as you know \0 is always included.
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int c=0;
    printf("Enter your sentence: ");
    fgets(str,sizeof(str),stdin);
    printf("%s",str);
     for(int i=0;str[i]!='\0';i++)  //for(int i=0;i<100;i++) 
        {
            c=c+1;
        }  
    
    printf("No. of characters = %d",c-1);
    //printf("%c",str[2]);
        printf("\n");
    // Another simple method using library <string.h>
        int n=strlen(str);
        //printf("%d",n); it includes \n also due to input
        printf("%d",n-1);
        printf("\n");
        char arr[]="my name is mk";
        printf("(arr char) %d",strlen(arr));
}