#include <stdio.h>
int main()
{
   FILE *fp=fopen("abc.txt","w");
  
     char str[50];
       fgets(str,sizeof(str),stdin);
       fprintf(fp,"your input : %s\n",str);
       
   int i=0;
  while(str[i]!='\0'){
    // printf("%c",str[i]);
    i++;
   }
   
      fprintf(fp,"L : %d\n",i-1); 

    return 0;
}