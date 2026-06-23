#include <stdio.h>
int main() {
    char s[1000],c=0;
    int arr[1000];
    scanf("%s",s);
    int v=1;
    int n=sizeof(s)/sizeof(s[0]);
    for (int i=0;i<n;i++) {
        for (int j=i+1;j<n;j++) {
            if (s[i]==s[j]) {
                c+=1;
                arr[i]=c;
            }
        }
    }

    printf("\n");
    printf("%d\n", 2/ 5);
    printf("%d", 2/ 5.0); // GARBAGE value
     printf("\n%f", 2/ 5.0);
     printf("\n%f", 2/ 5);
    // printf("\n%f", 5.0/2);   // prints 2.500000
    // printf("\n%.1f", 5.0/2); // prints 2.5
    // printf("\n%d", (int)(5.0/2)); // prints 2

    // int _main=1;
    //  printf("%d",_main); Valid var.
    /* int n,s=0,r;
        scanf("%d", &n);
        //Complete the code to calculate the sum of the five digits on n.
        for(int i=0;i<5;i++) {
            r=n%10;
            n=n/10;
            s=s+r;
        }
    printf("%d",s);*/
    
}


