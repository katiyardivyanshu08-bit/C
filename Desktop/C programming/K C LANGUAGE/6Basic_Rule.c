// Multiple C statements can be written in a single line. 
# include <stdio.h>
# include <math.h>  // math HEADER FILE
int main() 
{   
    /* 1
    int a ; float b ; int c ; // Multiple C statements can be written in a single line. 
    a = 25 ; b = 3.24 ; c = a + b * b-35 ; 
    printf("%d %f %d",a,b,c);
    printf("\n%d",c);   
    1*/
    int n1,n2;
    n1=2, n2=1;

    char x = 'a', y = 'b' ; 
    int   z = x + y ;
    printf("%d",x);
    printf("\n%d",y);
    printf("\n%d",z);
    float  a ; 
a = pow ( 3, 2) ; //
printf ( "\n%f", a ) ; 
    printf("\n");
      
    /*
Signed = can be negative or positive.
Unsigned = only positive
%d → signed int
%u → unsigned int
%ld → signed long
%lu → unsigned long*/

    int arr[] = {10, 20, 30, 40, 50,60};

    printf("Total size of array in bytes: %lu\n", sizeof(arr));
    printf("Size of one int element: %lu\n", sizeof(arr[0]));
    printf("Number of elements in array: %lu\n", sizeof(arr)/sizeof(arr[0]));

    // int t;
    // printf("%d",t); //As value of t is not given so it gives garbage value(random value)
} 
// #include <stdbool.h>
// bool a = true;
