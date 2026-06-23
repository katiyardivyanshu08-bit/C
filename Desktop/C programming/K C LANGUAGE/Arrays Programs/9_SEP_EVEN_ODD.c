#include <stdio.h>
int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n], even[n], odd[n];
    int ecount = 0, ocount = 0;

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Separate even and odd
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even[ecount] = arr[i];
            ecount++;
        } else {
            odd[ocount] = arr[i];
            ocount++;
        }
    }

    // Print even numbers
    printf("\nEven numbers: ");
    for (int i = 0; i < ecount; i++) {
        printf("%d ", even[i]);
    }

    // Print odd numbers
    printf("\nOdd numbers: ");
    for (int i = 0; i < ocount; i++) {
        printf("%d ", odd[i]);
    }

    return 0;
}