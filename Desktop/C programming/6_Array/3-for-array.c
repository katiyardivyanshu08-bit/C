#include <stdio.h>
int main()
{ system("cls");
    int i;
//    int  arr[5]={1,2,3,4,5};
//     for(i=1;i<=4;i++)
//     printf("%d ",arr[i]);

      int arr[5];
      for(i=0;i<=4;i++) { printf("enter a number : %d\n",i);
        scanf("%d",&arr[i]);
    }
      printf("%d",arr[3]);
    return 0;
} 