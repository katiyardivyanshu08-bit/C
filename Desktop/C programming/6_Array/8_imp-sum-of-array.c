#include <stdio.h>
int main()
{ system("cls");
    int i,n;
    // int arr[4];
     int a = 0;         //   input ke liye
    printf("number of values : "); scanf("%d",&n);
    int arr[n];
    int count=0;

    // Input array elements
    for(i = 0; i < n; i++) {
        printf("Enter your array %d : ", i + 1);
        scanf("%d", &arr[i]);
        count=count+1;
    }

    // Calculate sum
    for(i = 0; i < n; i++) {
        a = arr[i] + a;
    }

    printf("Sum = %d\n", a);
    printf("%d",count);
    return 0;
}
