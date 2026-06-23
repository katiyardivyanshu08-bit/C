#include <stdio.h>
#include <string.h>

int main()
{ system("cls");
    // char str[]="my name is rajat !";
    // printf("%s\n",str);
    // puts(str);// \n hota h last m
    // puts("hello everyone");string print \n hota h last m

    char str[50];
   // scanf("%s",str);// only the first word
  scanf("%[^\n]",str);
  //  fgets(str,sizeof(str),stdin);// yadi limit se jyada input dene pr \n count nhi hota h
  //  str[strcspn(str,"\n")]=0;    // gets wale function mai remove \n ko 
  //  puts(str);//\n hota h last m
   //printf("your input : %s",str);

  //  string output lena    
   for(int i=0;str[i]!='\0';i++){
    printf("%c",str[i]);
   }
  // //or
  // int i=0;
  // while(str[i]!='\0'){
  //   printf("%c",str[i]);
  //   i++;
  // }

    
   //length

 int length = strlen(str);
 int b=length-1;//-1 tb jb input fgets se le rhe becuse fgets m last \n hota h vo ise bhi count karta h
 printf("%d",b);
    return 0;
}
