#include <stdio.h>
int main()
{ system("cls");
    //char arr[]={'M','y',' ','n','\0'}; \\use \0 imp here
    char arr[]="My name is rajat\0";//\0->null character no need here 
    int i=0;
    while (arr[i]!='\0')
    {
        printf("%c",arr[i]);
        i++;
    }
    
    return 0;
}
