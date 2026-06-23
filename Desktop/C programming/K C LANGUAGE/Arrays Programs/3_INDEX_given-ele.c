// Find index of a given ele. in an arr.
// My code follows linear search
#include <stdio.h>
int main() {
    int arr[7]={10,-11,20,-22,33,-33,1};
    int e,temp=-1; // Like Prime No.
    printf("Enter arr ele.");
    scanf("%d",&e);
    for(int i=0;i<7;i++) {
        if (arr[i]==e) {
            printf("Index of given ele = %d",i); 
            temp=0;
            break;}
    }
    if (temp==-1) printf("Not found");
    
}
