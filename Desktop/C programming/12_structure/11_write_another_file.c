#include <stdio.h>
int main() {
     FILE *fp=fopen("Rishi.txt","w+"); // w+ read and write both
     	fputs("All the best",fp);
     	rewind(fp);
     	
      FILE *fpp=fopen("R.txt","w");	
      
      	while(!feof(fp)){
	    char ch=fgetc(fp);
	    fputc(ch,fpp);
	}
      
     	
   
     
	return 0;
	
}