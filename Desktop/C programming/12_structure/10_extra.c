#include <stdio.h>
int main() {
     FILE *fp=fopen("Rishi.txt","w+"); // w+ read and write both
     	fputc('r',fp);
     	fputc('a',fp);
     	fputc('j',fp);
     	fputc('a',fp);
     	fputc('t',fp);
     	rewind(fp);
     	
//      	while(!feof(fp)){
// 	    char ch=fgetc(fp);
// 	    printf("%c",ch);
// 	}

     char name[100];
fgets(name,100,fp);
printf("%s",name);


// fseek()  charter print any imndex
fseek(fp,4,SEEK_SET); // start se 4 index
 printf("\n%c",fgetc(fp));
 
fseek(fp,-3,SEEK_END); // end se 4 index
 printf("\n%c",fgetc(fp));



     
	return 0;
	
}