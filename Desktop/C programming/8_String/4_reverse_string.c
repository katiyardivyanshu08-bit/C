#include <stdio.h>
int main()
{ system("cls");
    char str[100];
    // scanf("%[^\n]s",str); // no \n 
    // print("%s",str); // no \n 
    fgets(str,sizeof(str),stdin);// yes \n
    str[strcspn(str,"\n")]=0;    // gets wale function mai remove \n ko 
     puts(str);                   // yes \n
    // printf("%s",str);
    int l=strlen(str);
    int a=l-1;
    // printf("%d",a);
    for(int i=a;i>=0;i--){
     printf("%c",str[i]); 
    }

    


//     //size
//     int size=0;
//     int i=0;
//     while (str[i]!='\0'){ 
//         size++;
//         i++; }
//      int a=size;
//     printf("%d\n",a);


//      for(i=a-1;i>=0;i--){
// printf("%c",str[i]);
//      }
     
    return 0;
}
