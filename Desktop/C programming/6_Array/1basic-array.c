#include <stdio.h>
int main()
{ system("cls");
    int n,i;
    printf("Enter a number of boxes : "); scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++){ printf("Enter your number %d : ",i+1); scanf("%d",&arr[i]); }
     return 0;
}
