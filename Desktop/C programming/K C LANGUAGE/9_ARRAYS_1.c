#include <stdio.h>
int main() {
    // Method 1 to create array
    int arr[5];
    arr[0]=11;
    arr[3]=22;
    printf("%d\n",arr[3]);
    arr[3]=33;  // Overwrite the value at pos. 3
    printf("%d\n",arr[3]);
printf("\n");
    // Method 2 to create array
    int arr1[5]={10,20,30,10,40}; //Creating array at COMPILE TIME INITIALISATION means we are giving values to the array at the time of initialisation.
    printf("%d\n",arr1[5]); // Garbage Value
printf("\n");
    // Method 3 to create array
    int arr2[5]={3,2,1}; // Other values are 0
    printf("%d\n",arr2[0]);
    printf("%d\n",arr2[1]);
    printf("%d\n",arr2[2]);
    printf("%d\n",arr2[3]);
    printf("%d\n",arr2[4]);
    // We will get garbage values after this 
    printf("%d\n",arr2[5]); // Random Value = Garbage Value
    printf("%d\n",arr2[6]);
    printf("%d\n",arr2[10]);

    // RUN TIME initialisation = We are storing the values of arr. at the run time (using scanf() fn.)
}