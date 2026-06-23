#include <stdio.h>
int main()
{ system("cls");
    int i,a,b,j;
    printf("Enter your Row and Column : "); scanf("%d %d",&i,&j);
    int arr1[i][j];
    printf("Enter your  1st matric :\n");
    for(int a=0;a<i;a++){
        for(int b=0;b<j;b++   ){
            scanf("%d",&arr1[a][b]);
        }
        
    }
    printf("Your 1st matric is :\n");
    for(int a=0;a<i;a++){
        for(int b=0;b<j;b++   ){
            printf("\t%d",arr1[a][b]);
        }
        printf("\n");
    }
   
    int arr2[i][j];
    printf("Enter 2nd your matric :\n");
    for(int a=0;a<i;a++){
        for(int b=0;b<j;b++   ){
            scanf("%d",&arr2[a][b]);
        }
        
    }
    printf("Your 2st matric is :\n");
    for(int a=0;a<i;a++){
        for(int b=0;b<j;b++   ){
            printf("\t%d",arr2[a][b]);
        }
        printf("\n");
    }
    int res[i][j];
     

      for(int a=0;a<i;a++){
        for(int b=0;b<j;b++   ){
            res[a][b]=arr1[a][b]+arr2[a][b];
        }
        printf("\n"); 
    }
    printf("Addition of two matric is :\n");
      for(int a=0;a<i;a++){
        for(int b=0;b<j;b++   ){
          printf("\t%d",res[a][b])  ;
        }
        printf("\n");
    }
    
    return 0;
}