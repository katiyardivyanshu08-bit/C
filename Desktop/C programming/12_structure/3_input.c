// //Structure=>datatype(custom data type)
// //used to store elements of different data types in a single variable.
// #include <stdio.h>
// int main() {
//    system("cls");   
//     struct Employe{
//         int ID;
//         char Grade;
//         char company[20];               
        
        
//     };
// //    struct  Employe E1;//={1,'A',"Microsoft"};

// //     scanf("%d %c %s",&E1.ID,&E1. Grade,E1.company);
// //    struct  Employe E2;//={1,'A',"Microsoft"};
// //   scanf("%d %c %s",&E2.ID,&E2. Grade,E2.company);

// //    struct  Employe E3;//={1,'A',"Microsoft"};
// //   scanf("%d %c %s",&E3.ID,&E3. Grade,E3.company);

// //   printf("Employe 1 :\nID : %d \nGrade : %c \nCompany : %s\n\n",E1.ID,E1. Grade,E1.company);
// //   printf("Employe 2 :\nID : %d \nGrade : %c \nCompany : %s\n\n",E2.ID,E2. Grade,E2.company);
// //   printf("Employe 3 :\nID : %d \nGrade : %c \nCompany : %s",E3.ID,E3. Grade,E3.company); 
// //     return 0;
// // }
// int n;
// printf("Enter number of employes: ");
// scanf("%d\n",&n);

// struct  Employe E[n];

// for(int i=0;i<n;i++){
//     scanf("%d %c %s",&E[i].ID,&E[i]. Grade, E[i].company);
//     printf("\n");
// }
// for(int i=0;i<n;i++){
//     printf("\nEmploye %d :\nID : %d \nGrade : %c \nCompany : %s\n\n",i+1,E[i].ID,E[i]. Grade,E[i].company);
// }
//   return 0;
//  }

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* ---------- STRUCTURES ---------- */

struct User {
    char username[20];
    char password[20];
};

struct Product {
    int id;
    char name[20];
    float price;
};

/* ---------- USER FUNCTIONS ---------- */

void registerUser() {
    FILE *fp;
    struct User u;

    fp = fopen("users.dat", "ab");

    printf("Enter username: ");
    scanf("%s", u.username);

    printf("Enter password: ");
    scanf("%s", u.password);

    fwrite(&u, sizeof(u), 1, fp);
    fclose(fp);

    printf("User registered successfully.\n");
}

int loginUser() {          
    FILE *fp;
    struct User u;
    char un[20], pw[20];

    fp = fopen("users.dat", "rb");

    printf("Enter username: ");
    scanf("%s", un);
    printf("Enter password: ");
    scanf("%s", pw);

    while (fread(&u, sizeof(u), 1, fp)) {
        if (strcmp(u.username, un) == 0 &&
            strcmp(u.password, pw) == 0) {
            fclose(fp);
            return 1;
        }
    }

    fclose(fp);
    return 0;
}

/* ---------- PRODUCT FUNCTIONS ---------- */

void addProduct() {
    FILE *fp;
    struct Product p;

    fp = fopen("products.dat", "ab");

    printf("Enter product id: ");
    scanf("%d", &p.id);
    printf("Enter product name: ");
    scanf("%s", p.name);
    printf("Enter price: ");
    scanf("%f", &p.price);

    fwrite(&p, sizeof(p), 1, fp);
    fclose(fp);

    printf("Product added successfully.\n");
}

void viewProducts() {
    FILE *fp;
    struct Product p;

    fp = fopen("products.dat", "rb");

    printf("\n--- Product List ---\n");

    while (fread(&p, sizeof(p), 1, fp)) {
        printf("ID: %d | Name: %s | Price: %.2f\n",
               p.id, p.name, p.price);
    }

    fclose(fp);
}

/* ---------- BUY PRODUCT & BILL ---------- */

void buyProduct() {
    FILE *fp;
    FILE *bill;
    struct Product p;
    int pid, found = 0;

    fp = fopen("products.dat", "rb");
    bill = fopen("bill.txt", "a");

    viewProducts();

    printf("\nEnter product ID to buy: ");
    scanf("%d", &pid);

    while (fread(&p, sizeof(p), 1, fp)) {
        if (p.id == pid) {
            printf("\n--- BILL ---\n");
            printf("Product: %s\n", p.name);
            printf("Price: %.2f\n", p.price);

            fprintf(bill, "Product: %s | Price: %.2f\n",
                    p.name, p.price);

            found = 1;
        }
    }

    if (found == 0)
        printf("Product not found.\n");

    fclose(fp);
    fclose(bill);
}

/* ---------- MAIN PROGRAM ---------- */

int main() {system("cls");   
    int ch, adm;

    while (1) {
        printf("\n===== E-COMMERCE SYSTEM =====\n");
        printf("1. Register\n");
        printf("2. User Login\n");
        printf("3. Admin Login\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        if (ch == 1) {
            registerUser();
        }

        else if (ch == 2) {
            if (loginUser() == 1) {
                printf("Login successful.\n");

                while (1) {
                    printf("\n1. View Products\n");
                    printf("2. Buy Product\n");
                    printf("0. Logout\n");
                    printf("Enter choice: ");
                    scanf("%d", &ch);

                    if (ch == 1)
                        viewProducts();
                    else if (ch == 2)
                        buyProduct();
                    else
                        break;
                }
            } else {
                printf("Login failed.\n");
            }
        }

        else if (ch == 3) {
            char a[10], b[10];

            printf("Enter admin username: ");
            scanf("%s", a);
            printf("Enter admin password: ");
            scanf("%s", b);

            if (strcmp(a, "admin") == 0 &&
                strcmp(b, "123") == 0) {

                while (1) {
                    printf("\n1. Add Product\n");
                    printf("2. View Products\n");
                    printf("0. Logout\n");
                    printf("Enter choice: ");
                    scanf("%d", &adm);

                    if (adm == 1)
                        addProduct();
                    else if (adm == 2)
                        viewProducts();
                    else
                        break;
                }
            } else {
                printf("Admin login failed.\n");
            }
        }

        else if (ch == 0) {
            exit(0);
        }

        else {
            printf("Invalid choice.\n");
        }
    }
}