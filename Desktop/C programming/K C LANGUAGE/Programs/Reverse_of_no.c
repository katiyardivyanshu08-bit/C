// Both no. of digits and reverse of a no.
#include <stdio.h>
int main() {
    // int n;
    // printf("Enter a no.");
    // scanf("%d",&n);
    // int s=0,t;
    // int c=0;
    // while (n!=0) {
    //     t=n%10;
    //     s=s*10+t;
    //     n/=10;
    //     c+=1;
    // }
    // printf("Reverse of no.=%d\n",s);
    // printf("No. of digits= %d",c);

    int n;
    printf("Enter a no.");
    scanf("%d",&n);
    int s=0,t;
    int c=0;
    for(int i=n;i!=0;i/=10) {
        t=i%10;
        s=s*10+t;  // For sum, it is s=s+t;
        c+=1;
    }
     printf("Reverse of no.=%d\n",s);
     printf("No. of digits= %d",c);
}