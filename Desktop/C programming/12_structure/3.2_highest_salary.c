#include <stdio.h>
int main(){
    system("cls");
   typedef struct Stu {
       char name[50];
       int age;
       float cgpa;
        
    }S;
    int n;
    printf("Enter a Number of student : "); scanf("%d",&n);
    S B[n];
    
    for(int i=0;i<n;i++){
        getchar();
        scanf("%[^\n]",&B[i].name);
        scanf("%d %f",&B[i].age,&B[i].cgpa);
    }

    int index=0;
     for(int i=0;i<n;i++){
        if(B[i].cgpa>B[index].cgpa) index=i;
    }

     printf("%s %d %.1f",B[index].name,B[index].age,B[index].cgpa);




    return 0;
}
// in hacker rank
// #include <stdio.h>
// #include <stdlib.h>

// typedef struct Stu {
//     char name[50];
//     int age;
//     float cgpa;
// } S;

// int main() {
//     int n;
//     scanf("%d", &n);

//     // Dynamic memory allocation
//     S *B = (S*)malloc(n * sizeof(S));

//     // Input
//     for (int i = 0; i < n; i++) {
//         scanf("%s %d %f", B[i].name, &B[i].age, &B[i].cgpa);
//     }

//     // Find highest CGPA
//     int index = 0;
//     for (int i = 1; i < n; i++) {
//         if (B[i].cgpa > B[index].cgpa) {
//             index = i;
//         }
//     }

//     // Output
//     printf("%s %d %.1f", B[index].name, B[index].age, B[index].cgpa);

//     // Free memory
//     free(B);

//     return 0;
// }
