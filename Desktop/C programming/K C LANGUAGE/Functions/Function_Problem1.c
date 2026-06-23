#include <stdio.h>
int count(char str[]) {
    int c=0;
     for(int i=0;str[i]!='\0';i++) { //for(int i=0;i<100;i++) 
            c=c+1;
        }  
        return c;
}
int main() {
    char str[100];
    printf("Enter your sentence: ");
    fgets(str,sizeof(str),stdin);
    printf("%s",str);
    int a = count(str);
    printf("%d",a-1); // fgets add \n also, therefore we take a-1

}