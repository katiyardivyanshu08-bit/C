#include <stdio.h>
#include <string.h>
int main() {
    char str[40];
    scanf("%s",str);
    int c=0;
    for(int i=0;str[i]!='\0';i++)  //for(int i=0;i<100;i++) 
        {
            c=c+1;
        } 
    for (int i=c-1;i>=0;i--) {
        printf("%c\n",str[i]);
    }
    printf("%d\n",c);
    printf("Len is : %d",strlen(str));
}