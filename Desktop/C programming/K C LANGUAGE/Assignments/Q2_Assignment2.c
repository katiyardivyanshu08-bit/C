/*
You are working as a Data Engineer for a Smart Grid Energy System. The system monitors energy consumption in N connected houses. Each house reports an integer value:
Positive value → surplus energy generated (in kWh)
Negative value → energy deficit (in kWh)
To maintain grid stability, you must minimize the total number of energy transfer operations needed to make all houses’ energy values equal (i.e., achieve a balanced grid).
In one operation, you can transfer 1 unit of energy from one house to its adjacent house (either left or right).
Your task is to calculate the minimum number of energy transfers required to balance the system.
explanation :
4 [4, -1, -3, 0]
Prefix sums:
after 1st house: 4
after 2nd house: 4 + (−1) = 3
after 3rd house: 3 + (−3) = 0
after 4th house: 0 + 0 = 0
Minimum transfers = sum of absolute prefix sums up to n-1 = |4| + |3| + |0| = 4 + 3 + 0 = 7.
So the minimal number of adjacent 1-unit transfers required is 7.
(You can verify by simulating moves — e.g. send 3 units from house1→2→3, then remaining 1 from house1→2 — total 7 moves.)
Input Format
The first line contains an integer N — the number of houses.
The second line contains N integers separated by spaces — representing energy values of each house.
Constraints
1 ≤ N ≤ 100000 -1000000 ≤ energy[i] ≤ 1000000
Output Format
Print a single integer — the minimum number of transfers required to balance the grid. If balancing is not possible, print -1.
Sample Input 0
5
-5 0 10 -2 -3
Sample Output 0
18
Sample Input 1
4
4 -1 -3 0
Sample Output 1
7
*/

#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    int total = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        total += arr[i];
    }
    if (total != 0) {
        printf("-1");
        return 0;
    }
    int prefix = 0;
    int moves = 0;
    for (int i = 0; i < n - 1; i++) {
        prefix += arr[i];
        if (prefix < 0)
            moves -= prefix;   // add |prefix|
        else
            moves += prefix;
    }
    printf("%d", moves);
}
