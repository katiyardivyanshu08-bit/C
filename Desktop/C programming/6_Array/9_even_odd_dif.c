#include <stdio.h>
int main()
{ system("cls");
    int n,i;
    printf("Enter a number of boxes : "); scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++){ printf("Enter your number %d : ",i+1); scanf("%d\n",&arr[i]); }
    int even=0;
    int odd=0;
    int dif;

    for(i=0;i<n;i++){
        if ( i%2==0){even+=arr[i];}
        else { odd+=arr[i];}
         }
    printf("Addition of even index arary : %d\n",even);
    printf("Addition of odd index arary : %d\n",odd);
    printf("%d",dif=even-odd);

    
    return 0;
}

// #include <stdio.h>
//  // strlen() function yaha se aata hai

// int main() {
//      system("cls");
//     char str[100];
//     printf("Enter a string: ");
//     gets(str);   // (unsafe but simple for learning)

//     int length = strlen(str);  // string length nikalta hai

//     printf("Length of string = %d", length);
//     return 0;
// }
