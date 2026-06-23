#include <stdio.h>

int main() {
    system("cls");
   int a,b,add;
   scanf("%d %d",&a ,&b);
   int arr[a][b];
   for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("Enter a number : ");
            scanf("%d",&arr[i][j]);
        }
   }
 int minr=0;
 int maxr=a-1;
 int minc=0;
 int maxc=b-1;
 int mul=a*b;
 int count=0;
while (count<mul)
{
    


 if(count>=mul){break;}
 for(int j=minc;j<=maxc;j++){
     printf("%d",arr[minr][j]);
     count++;
    }
    minr++;
     if(count>=mul){break;}
    for(int i=minr;i<=maxr;i++){
        printf("%d",arr[i][maxc]);
        count++;
    }
 
    maxc--;
    if(count>=mul){break;}
    for(int j=maxc;j>=minc;j--){
        printf("%d",arr[maxr][j]);
        count++;
    }
    maxr--;
    if(count>=mul){break;}

    for(int i=maxr;i>=minr;i--){
        printf("%d",arr[i][minc]);
       count++;
    }
     minc++;
 }
 return 0;
}