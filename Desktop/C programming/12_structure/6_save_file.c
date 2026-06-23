#include <stdio.h>
int main()
{    system("cls");

   FILE *fp=fopen("abc.txt","w");
   fputs("rajat\n",fp);
   fputc('r',fp);
   
   int a=10,b=20;
   int sum=a+b;
   fprintf(fp,"\n%d %d %d",a,b,sum);

    return 0;
}