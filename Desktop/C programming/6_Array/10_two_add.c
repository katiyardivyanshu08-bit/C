#include <stdio.h>
int main()
{ system("cls");
    int n,i;
    int arr[8]={1,2,3,4,5,6,7,8};
    int totalNuP=0;
    int x;
    printf("Enter a number : ");scanf("%d",&x);
    for (i=0;i<8;i++){
        for(int j=i+1;j<8;j++){
            if (arr[i]+arr[j]==x){totalNuP++;
        printf("(%d,%d)\n",arr[i],arr[j]);

            }
            
        }
    }
printf("Total pair : %d",totalNuP);
    
    return 0;
}