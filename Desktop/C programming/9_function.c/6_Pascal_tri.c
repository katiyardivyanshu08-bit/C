// #include <stdio.h>
// int factorial(int x){
//     int fact=1;
//     for(int i=1;i<=x;i++){fact*=i;}
//     return fact;
// }
// int combination(int n,int r){
//    return factorial(n)/(factorial(r)*factorial(n-r));
// }
// int main()
// { system("cls");
//     int n;
//     scanf("%d",&n);
//     for(int i=0;i<=n;i++){
//     for(int k=0;k+i<=n;k++){
//         printf(" ");
//     }
//     for(int j=0;j<=i;j++){
//       int ncr=combination(i,j);
//       printf("%d ",ncr);
//     }
//         printf("\n");
//     }
//     return 0;}

// OR 

#include <stdio.h>
int main()
{ system("cls");
    int n;
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        int first=1; 
    for(int k=1;i+k<=n;k++){
        printf(" ");
    }
    for(int j=0;j<=i;j++){
      printf("%d ",first);
      first=first*(i-j)/(j+1);
    }
        printf("\n");
    }


    return 0;}