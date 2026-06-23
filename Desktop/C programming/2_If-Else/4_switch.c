#include <stdio.h>
int main() { 
    system("cls");
    int n;
    printf("inter a number ="); 
    scanf("%d",&n);
    switch (n){
    case 1: printf("Monday"); break;   //n==1
    case 2: printf("Tuesday"); break;
    case 3: printf("Wednesday"); break;
    case 4: printf("Thursday"); break;
    case 5: printf("Friday"); break;
    case 6: printf("Saturday"); break;
    case 7: printf("Sunday"); break;
    
    default: printf("Invalid Day");
    
    }
    return 0;   
}
