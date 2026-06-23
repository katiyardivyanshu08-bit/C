/*A small shop charges based on total purchase:
If total < 500 → no discount
If 500 ≤ total < 2000 → 10% discount
If 2000 ≤ total < 5000 → 20% discount
If total ≥ 5000 → 30% discount
Write a C program that:
Takes total purchase amount as input.
Calculates the final bill after discount.
Displays both the discount and the payable amount.
Input Format
A single line containing a number: total_amount — the total bill amount (in rupees)
Constraints
0 < total_amount ≤ 1000000 Discount Rules: - No discount if amount < 500 - 20% discount if amount between 500 and 2000 (inclusive) - 25% discount if amount > 2000
Output Format
Discount: Rs. XXX Payable Amount: Rs. YYY
Sample Input 0
3200
Sample Output 0
Discount: Rs. 640
Payable Amount: Rs. 2560
Sample Input 1
480
Sample Output 1
Discount: Rs. 0
Payable Amount: Rs. 480
Sample Input 2
5600
Sample Output 2
Discount: Rs. 1680
Payable Amount: Rs. 3920*/
#include <stdio.h>
int main() {
    int total;
    printf("Enter total amt : ");
    scanf("%d",&total);
    if (total < 500) {
        printf("Discount: Rs. %d\n",0);
        printf("Payable Amount: Rs. %d",total);
    }
    else if(total>=500 && total<2000){
        int d=10*total/100;
        printf("Discount: Rs. %d\n",d);
        printf("Payable Amount: Rs. %d",total-d);
    }
    else if(total>=2000 && total<5000){
        int d=20*total/100;
        printf("Discount: Rs. %d\n",d);
        printf("Payable Amount: Rs. %d",total-d);
    }
    else {
        int d=30*total/100;
        printf("Discount: Rs. %d\n",d);
        printf("Payable Amount: Rs. %d",total-d);
    }
        
}

