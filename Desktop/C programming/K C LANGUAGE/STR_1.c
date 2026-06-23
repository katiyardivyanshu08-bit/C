/*  char name[10] = "Kaif";
sizeof(name) → total bytes of the array (10)
strlen(name) → characters before '\0' (4)
*/
#include <stdio.h>
int main() {
    // At compile time initialisation
    // char arr[10]="kaif"; // 1st Method
    char arr1[5]={'k','a','i','f'}; // 2nd Method
    // printf("%s",arr);
    // printf("\n");
    // printf("%s\n",arr1[5]); // Wrong Method to print string as this is the 6th ele.

    // printing a str if we know the length -
    for (int i=0;i<5;++i){
        printf("%c",arr1[i]);
    }
    // for (int i=0;i<4;++i){
    //     printf("%c",arr1[i]);
    // } Also Correct

    // for (int i=0; arr1[i]!='\0'; ++i) 
    // printf("%c", arr1[i]);
    printf("\n");


    // char name[10];  // 10 bytes is given for name arr.
    // printf("%d",sizeof(name)); //10

    printf("\n");
    printf("Enter string 1 :");
    char  s1[100],s2[100];
    fgets(s1,sizeof(s1),stdin);
    printf("Enter string 2 :");
    fgets(s2,sizeof(s2),stdin);
    printf("%s",s1);
    printf("%s",s2);//printf("\n%s",s2);
   
}
