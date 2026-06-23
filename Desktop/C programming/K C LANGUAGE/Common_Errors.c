#include <stdio.h>
int main() {

char s[1000],c=0;
    int arr[1000];
    scanf("%s",s);
    int n=sizeof(s)/sizeof(s[0]);
    for (int i=0;i<n;i++) {
        for (int j=i+1;j<n;j++) {
            if (s[i]==s[j]) {
                c+=1;
                arr[i]=c;
            }
        }
    }
    // char str;
    // scanf("%s",str);
    // printf("%s\n",str);
    // char s[]=str;  THIS STATEMENT GIVES ERROR B/C C IS NOT A INTERPRETED LANG. MEANS IT DOESN'T READ CODE LINE BY LINE.
    // int n=sizeof(s)/sizeof(s[0]);
    // printf("%d",n);
}