#include <stdio.h>
int main() {
//     FILE *fp=fopen("abc.txt","w"); 

         
// 	if (fp==NULL) {
// 		printf("File is not exist");
// 		  return 0;
// 	}
	
// 	fputs("my name is rajat\n",fp);
// 	fputc('m',fp);
	
// 	int a,b;
// 	a=1;b=2;
// 		fprintf(fp," %d %d",a,b);



// 	fclose(fp);

  FILE *fp=fopen("abc.txt","r"); //a upend mood when you click run previous data not relese
  if (fp==NULL) {
		printf("File is not exist");
		  return 0;
 	}
//  	while(!feof(fp)){
//  	    char ch=fgets(fp);
//  	    printf("%c",ch);
//  	}

char name[100];
fgets(name,100,fp);
printf("%s",name);

	return 0;
	
}