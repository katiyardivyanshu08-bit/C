#include <stdio.h>
int main()
{
    // Sum of array elements
    // int arr[50] = {50, 20, 10, 40, 30, 100, 70, 90, 60, 80}; // Except these 10 value,other values are 0.
    // int s = 0;
    // for (int i = 0; i < 10; i++)
    // {
    //     s = s + arr[i];
    //     printf("%d ", arr[i]);
    // }
    // printf("\nSum of arr. elements = %d", s);
    // printf("\n");

    printf("Enter no. of subjects :");
    int n;
    scanf("%d",&n);// scanf() contains newline character
    int arr[n];
    for (int i=0;i<n;i++) {
        printf("Enter marks of subject %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\n");
    for (int i=0;i<n;i++) {
        printf("%d\n",arr[i]);
    }
    printf("\n");
    int sum=0;
    for (int i=0;i<n;i++) {
        sum=sum+arr[i];
    }
     float avg=(float)sum/n; // Type Casting
    printf("Sum = %d\n",sum);
    // printf("Average = %d",avg); Answer is 0
    printf("Average = %.2f",avg);
}