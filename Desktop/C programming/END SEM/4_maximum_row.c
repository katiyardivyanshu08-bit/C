#include <stdio.h>

int main()
{system("cls");
    int a, b;

    // ✅ Input: Rows & Columns
    printf("Enter rows and columns: ");
    scanf("%d %d", &a, &b);

    int arr[a][b];

    // ✅ Input: Matrix (ALAG BLOCK)
    printf("Enter matrix:\n");
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // ✅ Row with Maximum Sum Logic (ALAG BLOCK)
    int maxSum = 0, row = 0;

    for(int i = 0; i < a; i++)
    {
        int sum = 0;

        for(int j = 0; j < b; j++)
        {
            sum = sum + arr[i][j];
        }

        if(i == 0 || sum > maxSum)
        {
            maxSum = sum;
            row = i+1;
        }
    }

    // ✅ Output
    printf("Row with maximum sum = %d\n", row);
    printf("Maximum sum = %d", maxSum);

    return 0;
}
