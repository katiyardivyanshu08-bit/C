/*A driver records the distance traveled (in km) and the fuel consumed (in liters) for multiple trips. Write a program that:
Takes n (number of trips) as input.
For each trip, takes two inputs: distance and fuel.
Calculates the average fuel efficiency (km per liter) across all trips.
If any fuel value is 0, skip that trip and print a warning message: "Trip skipped due to invalid fuel input."
Input Format
n distance1 fuel1 distance2 fuel2 ... distancen fueln
Constraints
1 ≤ n ≤ 10
0 ≤ distance, fuel ≤ 1000
Output Format
Average Efficiency: XX.XX km/l
Sample Input 0
3
200 10
150 0
300 15
Sample Output 0
Trip skipped due to invalid fuel input.
Average Efficiency: 20.00 km/l
Sample Input 1
2
100 5
250 10
Sample Output 1
Average Efficiency: 20.00 km/l
Sample Input 2
4
120 10
90 0
0 12
200 10
Sample Output 2
Trip skipped due to invalid fuel input.
Average Efficiency: 19.00 km/l */
#include <stdio.h>
int main() {
    int n;
    float d,f;
    float sd=0,sf=0;
    int a;
    printf("Enter no. of trips : ");
    scanf("%d",&n);
    for (int i=0;i<n;i++) { 
        printf("Enter distance travelled : ");
        scanf("%f",&d);
        printf("Enter consumed fuel : ");
        scanf("%f",&f);
        if (d==0 || f==0) {
            //int a=1; Variables in C are only accessible within the block ({}) where they are declared. a exists only inside the loop’s curly braces.
            a=1;
            continue;
        }
        //printf("Answer is %.2f %.2f\n",d,f);
        sd+=d;
        sf=sf+f;
}
    if (a==1)
    printf("Trip skipped due to invalid fuel input.\n");
    printf("Average Efficiency: %.2f km/l",sd/sf);
}
/*
#include <stdio.h>
int main() {
    int n;
    float d,f;
    float sd=0,sf=0;
    int a=0;
    scanf("%d",&n);
    for (int i=0;i<n;i++) { 
        scanf("%f",&d);
        scanf("%f",&f);
        if (f==0) {
            a=1;
            continue;
        }
        sd+=d;
        sf=sf+f;
}
    if (a!=0) {
    printf("Trip skipped due to invalid fuel input.\n");
    }
    printf("Average Efficiency: %.2f km/l",sd/sf);
}
*/
