#include <stdio.h>
int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int visited[n];   // helper array to mark counted elements
    for (int i = 0; i < n; i++) {
        visited[i] = 0;
    }

    printf("\nFrequency of each element:\n");
    for (int i = 0; i < n; i++) {
        if (visited[i] == 1)  // already counted → skip
            continue;

        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1;   // mark as counted
            }
        }
        printf("%d occurs %d times\n", arr[i], count);
    }

    return 0;
}