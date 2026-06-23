#include <stdio.h>
int main(){
    // SMALLEST NO.
    int arr[]={22,10,44,140,22,66,11,33,55};
    int l=sizeof(arr)/sizeof(arr[0]);
    int s;
    s=arr[0];
    for(int k=1;k<l;++k) {
        if (arr[k]<s) {
            s=arr[k];
        }
    }
    printf("Smallest no. is %d\n",s);

    // 2nd Smallest No.
    int s1=arr[0];
    for (int i=0;i<l;i++) {
        if (arr[i]==s)
        continue;
        else {
            if (arr[i]<s1)
            s1=arr[i];
        }
    }
    printf("Second Smallest No. = %d",s1);

    
}