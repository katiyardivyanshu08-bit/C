/* Arrays = It is a collection of elements of same DT which is stored in a single variable.Elements/items/values are accessed by pos./index .
All values/elements are stored in contiguous(cont.)  memory locations like 200,204,208,.. for quick access.  Let arr. = array
Prop. of arr. is pos. of elements starts from 0.

Why we use Arrays?
Variables are great for storing & working with values. But what if we need to store multiple values of same DT. Ex= ages/phone numbers  of a group of people. Instead of creating seperate variables, we can use an array to store all values in a single VAR.
*/
 
#include <stdio.h>
int main() {
// To create an arr., specify the item type & arr. size
    int ages[7]; //Declaration of int arr.
    ///Name of arr.= 'ages' with max. capacity 7
    ages[0]=19;  // We can store/set/assign the items with index
    ages[9]=91;  // We have given maximum capicity 7. But its taking more than 7. How?
    printf("%d\n",ages[9]); // We can access the items using their pos.
    printf("Array is",ages); //Nothing is displaying.
printf("\n");
printf("\n");
/* If you already know what values to store in the arr. instead of assigning them one by one, then you can use following syntax-   */
    int a[]={10,20,30,10}; // creating an arr. without specifed it's size
    //int a[30]={10,20,30}; THIS IS ALSO CORRECT
    printf(" Answer= %d",a[35]);// Garbage value 
printf("\n");

}
// These programs are of 1 dimensional(indices) arr.