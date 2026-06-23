#include <stdio.h>
int main()
{ system("cls");
    int n,i;
    printf("Enter a number of boxes : "); scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++){ printf("Enter your number %d : ",i+1); scanf("%d",&arr[i]); }
    int max=arr[0];
    for(i=0;i<n;i++){
        if ( max<arr[i])
        max=arr[i];
                   }
        ;            
    printf("Your highest number is : %d",max);
    
    return 0;
}
