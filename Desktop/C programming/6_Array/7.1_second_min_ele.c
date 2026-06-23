#include <stdio.h>
int main() {
    system("cls");
    int n;
    printf("Enter array size: ");scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter element %d = ", i + 1);
        scanf("%d", &arr[i]);}

    printf("\nEntered array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);}
    
    // Find 1st smalest number
    int m = arr[0];
    for (int i = 0; i < n; i++) {
        if (arr[i] < m)
            m = arr[i]; }

    printf("\n1st Smalest No. = %d\n", m);

    // Find 2nd smalest number
    int m1 = arr[0];
    for (int i = 0; i < n; i++) {
        if (arr[i] == m)
            continue;
        if (arr[i] < m1)
            m1 = arr[i];
    }
    printf("2nd Smalest No. = %d\n", m1);
    return 0;
}