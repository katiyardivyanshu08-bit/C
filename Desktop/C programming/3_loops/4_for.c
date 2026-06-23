#include <stdio.h>
int main()
{ system("cls");
    int i,n,a;
    printf("enter a number : "); scanf("%d",&n);
   /* for (i=3;i<=n ;i=i+2)
    {
        printf("%d\n",i);
    }*/
   a=3; //kitne term chahiye
   for (i=1;i<=n ;i=i+1)
    {
        printf("%d\n",a);//for using extra variable
        a=a+2;
    }
    
    return 0;
}
