/*
A number is called perfect if the sum of its proper divisors equals the number itself. Example: 6 → (1 + 2 + 3 = 6) Write a program to:
Input two numbers start and end.
Find and print all perfect numbers between them (inclusive).
Print "No perfect numbers found." if none exist.
Input Format
Two space-separated integers: start end
Constraints
1 ≤ start < end ≤ 1000000
Output Format
Perfect numbers: 6 28 496
Sample Input 0
1 50
Sample Output 0
Perfect numbers: 6 28
Sample Input 1
100 500
Sample Output 1
Perfect numbers: 496
Sample Input 2
10 20
Sample Output 2
No perfect numbers found.
*/
#include <stdio.h>
int main() {
    int n1,n2;
    int s=0;
    int i,found=0;
    scanf("%d%d",&n1,&n2);
    for (i=n1;i<=n2;i++) {
        s=0;
        for (int j=1;j<=i/2;j++) {
            if (i%j==0) {
                s=s+j;
            }
        }
        //printf("S is %d  I is %d\n",s,i);
        if (s==i){
            if (found==0) {
                printf("Perfect Numbers: ");
            }
            found=1;
            printf("%d ",i);
        }
        }
        if (found==0) {
            printf("No perfect numbers found.");
        }
    }

