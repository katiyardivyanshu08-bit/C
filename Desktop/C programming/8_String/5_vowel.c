#include <stdio.h>
int main()
{ system("cls");
   char str[100];
   fgets(str,sizeof(str),stdin);
   int i ,vowel,conso;
   vowel=0;
   conso=0;

   for(i=0;str[i]!='\0';i++){
    if (str[i]=='a' ||str[i]=='e' ||str[i]=='i' ||str[i]=='o' ||str[i]=='u' ||str[i]=='A' ||str[i]=='E' ||str[i]=='I' ||str[i]=='O' ||str[i]=='U' ){
        vowel++;
    }
    else if ((str[i] >= 'a' && str[i] <= 'z') || 
         (str[i] >= 'A' && str[i] <= 'Z'))
 {
        conso++;
    }
   }

   printf("Your vowels %d\n",vowel);
   printf("Your consonent %d\n",conso);


    return 0;
}
