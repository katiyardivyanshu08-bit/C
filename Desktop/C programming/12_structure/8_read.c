#include <stdio.h>
int main()
{
//	FILE *fp=fopen("abc.txt","w"); 
		FILE *ftp=fopen("waf.txt","w+");

         
	if (ftp==NULL) {
		printf("File is not exist");
		  return 0;
	}
	
	fputs("my name is wasif",ftp);
//  nb// 	printf("%c",ch);
	while(!feof(ftp)){
	    	char ch=fgetc(ftp);
	printf("%c",ch);
	}
	
	// 	char ch1=fgetc(fp);
	// 	printf("%c",ch1);

	
	fclose(ftp);

	return 0;
	
}