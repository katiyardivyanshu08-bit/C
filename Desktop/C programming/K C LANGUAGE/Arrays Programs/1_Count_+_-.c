#include <stdio.h>
int main() {
    int arr[7]={10,-11,20,-22,33,-33,1};
    int c1=0,c2=0;
    for (int i=0;i<7;i++) {
        if (arr[i]>0)
        c1+=1;
        else
        c2+=1;
    }
    printf("No. of +=%d\n",c1);
    printf("No. of -=%d",c2);

}