#include <stdio.h>
int main()
{ system("cls");
   char str[100];
   fgets(str,sizeof(str),stdin);
   int i;
   for(i=0;str[i]!='\0';i++){
    printf("%c",str[i]);
   }
   int a=i-1;
   printf("%d",a);

   for(int j=a;j>=0;j--){
    printf("%c",str[j]);
   }
    return 0;
}
