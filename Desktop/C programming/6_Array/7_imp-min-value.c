#include <stdio.h>

int main() { 
    system("cls");
    int n;

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    
    // Input elements
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Assume first element is minimum
    int min = arr[0];

    // Traverse the array to find the minimum
    for (int i = 0; i < n; i++) {
        if ( min>arr[i]) {
            min = arr[i];
        }
    }

    printf("Minimum element in the array is: %d\n", min);
    return 0;
}
