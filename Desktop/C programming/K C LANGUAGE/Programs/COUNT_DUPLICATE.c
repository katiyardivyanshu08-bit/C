#include <stdio.h>
int main() {
    int arr[10] = {4, 2, 7, 2, 9, 4, 1, 7, 3, 4};
    int n = 10;
    int visited[10] = {0};  // mark elements already printed

    printf("Duplicate elements are:\n");

    for (int i = 0; i < n; i++) {
        if (visited[i] == 1)  // skip if already counted
            continue;

        int count = 0;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1;  // mark duplicate as counted
            }
        }

        if (count > 0) {  // if duplicate exists, print once
            printf("%d\n", arr[i]);
            visited[i] = 1;  // mark current element as counted too
        }
    }

    return 0;
}