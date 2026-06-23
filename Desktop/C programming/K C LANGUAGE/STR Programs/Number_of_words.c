// Count no. of words in a str
#include <stdio.h>
int main() {
    // int n;
    // printf("Enter size of sentence: ");
    // scanf(" %d",&n);
    char str[100];
    int c=0;
    printf("Enter yoursentence: ");
    fgets(str,sizeof(str),stdin);
    //printf("%s",str);
     for(int i=0;str[i]!=0;i++)  //for(int i=0;i<100;i++) 
      {
         if (str[i]==' ') {
             c=c+1;
        }  
        //printf("%c",str[i]);
    
    }
    printf("No. of words = %d",c+1);
    //printf("%c",str[2]);
}