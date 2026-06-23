#include <stdio.h>
#include <string.h>

#define MAX 450

// Structure for Student
struct Student {
    int roll;
    char name[50];
    char dept[30];
    char course[30];
    int year;
};          

// Function to print students joined in a particular year
void printByYear(struct Student s[], int n, int year) {
    int found = 0;
    printf("\nStudents joined in year %d:\n", year);
    for(int i = 0; i < n; i++) {
        if(s[i].year == year) {
            printf("%s\n", s[i].name);
            found = 1;
        }
    }
    if(!found) printf("No student joined in this year.\n");
}

// Function to print student data by roll number
void printByRoll(struct Student s[], int n, int roll) {
    int found = 0;
    for(int i = 0; i < n; i++) {
        if(s[i].roll == roll) {
            printf("\nRoll: %d\nName: %s\nDepartment: %s\nCourse: %s\nYear of Joining: %d\n",
                   s[i].roll, s[i].name, s[i].dept, s[i].course, s[i].year);
            found = 1;
            break;
        }
    }
    if(!found) printf("No student found with roll number %d\n", roll);
}

int main() {
    system("cls");
    struct Student students[MAX];
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

   
    for(int i = 0; i < n; i++) {
        getchar();
       scanf("%d %[^\n] %[^\n] %[^\n] %d",&students[i].roll, students[i].name, students[i].dept,students[i].course,&students[i].year);
    }

    int choice, cont = 1;
    while(cont) {
        printf("\nMenu:\n1. Print students by year\n2. Print student by roll number\n3. Exit\nEnter choice: ");
        scanf("%d", &choice);
        getchar(); // consume newline

        switch(choice) {
            case 1: {
                int yr;
                printf("Enter year: ");
                scanf("%d", &yr);
                printByYear(students, n, yr);
                break;
            }
            case 2: {
                int roll;
                printf("Enter roll number: ");
                scanf("%d", &roll);
                printByRoll(students, n, roll);
                break;
            }
            case 3:
                cont = 0;
                break;
            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}

// #include <stdio.h>
// #include <string.h>

// #define MAX 450

// // Structure for Student
// struct Student {
//     int roll;
//     char name[50];
//     char dept[30];
//     char course[30];
//     int year;
// };

// // Function to print students joined in a particular year
// void printByYear(struct Student s[], int n, int year) {
//     int found = 0;
//     printf("Students joined in year %d:\n", year);
//     for(int i = 0; i < n; i++) {
//         if(s[i].year == year) {
//             printf("%s\n", s[i].name);
//             found = 1;
//         }
//     }
//     if(!found) printf("No student joined in this year.\n");
// }

// // Function to print student data by roll number
// void printByRoll(struct Student s[], int n, int roll) {
//     int found = 0;
//     for(int i = 0; i < n; i++) {
//         if(s[i].roll == roll) {
//             printf("\nRoll: %d\nName: %s\nDepartment: %s\nCourse: %s\nYear of Joining: %d\n",
//                    s[i].roll, s[i].name, s[i].dept, s[i].course, s[i].year);
//             found = 1;
//             break;
//         }
//     }
//     if(!found) printf("No student found with roll number %d\n", roll);
// }

// int main() {
//     system("cls");
//     struct Student students[MAX];
//     int n;

//     printf("Enter number of students: ");
//     scanf("%d", &n);
//     if(n > MAX) {
//         printf("Maximum allowed students is %d\n", MAX);
//         return 1;
//     }

//     // Input details for n students
//     for(int i = 0; i < n; i++) {
//         printf("\nEnter details of student %d:\n", i+1);
//         printf("Roll number: ");
//         scanf("%d", &students[i].roll);
//         getchar(); // consume newline
//         printf("Name: ");
//         fgets(students[i].name, sizeof(students[i].name), stdin);
//         students[i].name[strcspn(students[i].name, "\n")] = 0; // remove newline
//         printf("Department: ");
//         fgets(students[i].dept, sizeof(students[i].dept), stdin);
//         students[i].dept[strcspn(students[i].dept, "\n")] = 0;
//         printf("Course: ");
//         fgets(students[i].course, sizeof(students[i].course), stdin);
//         students[i].course[strcspn(students[i].course, "\n")] = 0;
//         printf("Year of joining: ");
//         scanf("%d", &students[i].year);
//     }

//     int choice;
//     printf("\nMenu:\n1. Print students by year\n2. Print student by roll number\nEnter choice: ");
//     scanf("%d", &choice);

//     if(choice == 1) {
//         int yr;
//         printf("Enter year: ");
//         scanf("%d", &yr);
//         printByYear(students, n, yr);
//     } else if(choice == 2) {
//         int roll;
//         printf("Enter roll number: ");
//         scanf("%d", &roll);
//         printByRoll(students, n, roll);
//     } else {
//         printf("Invalid choice!\n");
//     }

//     return 0;
// }

