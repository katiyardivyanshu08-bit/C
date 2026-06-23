#include <stdio.h>
int main() {
    system("cls");
    struct Book{
        char name[50];
        float price;
        int pages;
    };
   int n; printf("Enter a number  a book : "); scanf("%d",&n);
  struct Book B[n];
  for(int i=0;i<n;i++){
         getchar();   // ❗fix: removes leftover '\n'

        scanf("%[^\n]\n%f\n%d", B[i].name, &B[i].price, &B[i].pages);        // price
       
   
  }
  for(int i=0;i<n;i++){
    printf("\nBook %d \nName : %s\nPrice : %.2f\nPages : %d",i+1,B[i].name,B[i].price,B[i].pages);
  }



    return 0;
}