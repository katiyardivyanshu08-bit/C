#include <stdio.h>
int main()
{ system("cls");
    int a,b;
    printf("Enter your row and colomn :\n");
    scanf("%d%d",&a,&b);
    int arr[a][b];
    printf("ENter your Matrix  :\n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int max=0,row=0;
    for(int j=0;j<b;j++){
        int sum=0;
        for(int i=0;i<a;i++){
            sum=sum+arr[i][j];
      }
        if(j==0||sum>max){
            max=sum;
            row=j+1;
        }  
    }
    printf("%d\n %d",max,row);

     return 0;
}
