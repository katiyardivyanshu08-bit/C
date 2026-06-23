 // In C, if you overwrite n (your input), you lose the original number because variables don’t “remember” their old value. That’s why you need a SEPERATE VAR. to store the result.
 #include <stdio.h>
 int main(){
    printf("Enter a no.");
    int n;
    scanf("%d",&n);
    int f=1;
    /*
    for(int i=1;i<=(n-1);i++)
    n=n*i;   Value of n is updating after each iteration but in python it doesn't update.  */
    for (int i=1;i<=n;i++) {
        f=f*i;
    }
    printf("%d",f);
}