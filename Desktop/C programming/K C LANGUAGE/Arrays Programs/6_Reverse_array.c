// Take array values as input and print reverse array
// This code is printing the values of arr. in reverse order
#include <stdio.h>
int main()
{
   int n;
   printf("Enter size of array:");
   scanf("%d",&n);
   int arr[n];
   for(int i=0;i<n;i++) {
    //printf("%d",i);
    scanf("%d",&arr[i]);
   }
   for(int j=(n-1);j>=0;j--) {
    printf("%d ",arr[j]);
   }
}
   // This code reverse values of arr. by swapping and then prints array

//     int arr[] = {1, 2, 3, 4, 5, 6};
//     int n = sizeof(arr) / sizeof(arr[0]);  // number of elements

//     printf("Original array: ");
//     for (int i = 0; i < n; i++)
//         printf("%d ", arr[i]);

//     // Reverse logic
//     for (int i = 0; i < n / 2; i++) {
//         int temp = arr[i];
//         arr[i] = arr[n - i - 1];
//         arr[n - i - 1] = temp;
//     }

//     printf("\nReversed array: ");
//     for (int i = 0; i < n; i++)
//         printf("%d ", arr[i]);

// CO=PILOT
// int arr[] = {10, 20, 30,60, 40, 50};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int reversed[size];

//     // Copy elements in reverse order
//     for (int i = 0; i < size; i++) {
//         reversed[i] = arr[size - 1 - i];
//     }

//     // Print reversed array
//     printf("Reversed array: ");
//     for (int i = 0; i < size; i++) {
//         printf("%d ", reversed[i]);
//     }

