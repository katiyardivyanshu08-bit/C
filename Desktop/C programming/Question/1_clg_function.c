#include <stdio.h>
int print(sum){
    for(int i=1;i<=sum;i++){
        printf("%d ",i);
    }
}
int add(int x,int y,int z){
    int sum=x+y+z;
    printf("%d\n",sum);
    print(sum);
}
main( ) {
system("cls");
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
add(a,b,c);

 return 0;
}

