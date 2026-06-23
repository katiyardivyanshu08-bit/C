#include <stdio.h>
int main()
{system("cls");
    //print
    char str[100];
    scanf("%[^\n]", &str);
    printf("%s\n", str);

    //length
    int i = 0;
    while (str[i] != '\0')
    {

        i++;
    }
    printf("%d\n", i);

   //reverse
   for(int j=i;j>=0;j--){
    printf("%c",str[j]);
   }

    //Count Vowel
     int conso=0;
    int vowel=0;
    for(int j=0;j<=i;j++){
        if((str[j]=='a'||str[j]=='e'||str[j]=='i'||str[j]=='o'||str[j]=='u'||str[j]=='A'||str[j]=='E'||str[j]=='O'||str[j]=='I'||str[j]=='U')){
vowel++;
        }
        else if((str[j]>='a' && str[j]<='z') || (str[j]>='A' && str[j]<='Z')){
conso++;
        }
    }
    printf("\n%d\n",vowel);
    printf("%d\n",conso);

    //Capital

      for( int i = 0; str[i] != '\0'; i++)
    {
        // ✅ agar lowercase hai to uppercase bana do
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
    }

    printf("%s", str);
    
    
    return 0;
}


// #include <stdio.h>
// int main()
// { system("cls");
//     // char arr[4]={'h','e','l','l','o'}; \\= char arr[4]="hello"
//     // printf("%c %c",arr[3],arr[4]);
//     // printf(" %d",arr[0]);

//     // char ch='A';
//     // int x=(int)ch;//type casting
//     // printf(" %d",x);
//     // printf(" %c",ch);
//     // printf(" %d",ch);    

//      char arr[]="My name is rajat\0";
//      arr[0]='e';
//      printf("%c%c%c\n%c",arr[1],arr[2],arr[3]);
//     return 0;
// }
// #include <stdio.h>



// int main() {system("cls");
//     int i;
//     char str[100];
//     fgets(str,sizeof(str),stdin);
//     int a=0;
//     for( i=0;str[i]!='\0';i++){
//         printf("%c",str[i]); 
     
//     }
//    printf("\n%d",i-1);

//     return 0;
// }