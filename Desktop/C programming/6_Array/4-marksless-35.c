#include <stdio.h>
int main()
{ system("cls");
     int mark[5];
     for(int i=1;i<6;i++){
          printf("enter a number : %d\n",i);
          scanf("%d",&mark[i]);
     }
    
    for(int i=0;i<5;i++){
         // printf("%d ",mark[i]);
         if(mark[i]<35) 
        printf("%d ",mark[i]);
       // printf("%d ",i); //index ke liye

    }
     return 0;
}