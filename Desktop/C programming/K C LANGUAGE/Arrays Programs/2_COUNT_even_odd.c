#include <stdio.h>
int main() {
     int arr[]={1,2,3,4,5,6,7};
     int c1=0,c2=0;
     for (int i=0;i<7;i++) {
        if (arr[i]%2==0) c1+=1;
        else c2+=1;
     }
     printf("Count evn=%d\n",c1);
     printf("Count odd=%d",c2);
}