// int stores 4 bytes for a value. double stores 8 bytes for a value.
// Pointers = A variable that stores memory address of another variable.
// We can't store memory adresses in normal var. We use asterisk sign before var. name like *n
// &a = It gives address.
// Need
#include <stdio.h>
int main() {
    //int a; // It is a normal var. that stores value. 
//int *a; // We declared a pointer var. that can store memory address of another var.
// The memory address is integer value then why are we declaring DT?
// B/c the given DT belongs to another var.  
// int a1=10;
//int b=&a1;    // Error, For pointers var. we use asterisk sign before var.
int x=10;
int *y;
y=&x;
printf("Value of x = %d\n",x); 
printf("Memory Address of x = %d\n",&x);  
printf("Memory Address of x stored in var. y = %d\n",y); // Value of y   
printf("Memory Address of y = %d\n",&y); 
int *z=&y; // Memory Address of y stored in var. z
printf("Memory Address of y stored in var. z = %d\n",z); 

// int a=11;
// int *x=&a; error: conflicting types for 'x'
//printf("%d\n");

// Now to print value of a normal var. by using pointer var.
printf("Display value of x = %d\n",*y); 
printf("Display value of y that is memory address of x = %d\n",*z); 

}

