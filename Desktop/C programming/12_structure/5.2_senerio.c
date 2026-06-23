struct Bank { 
    char name[30]; 
    int Acount; 
    float balance; 
}; 
 
int main() { 
    struct Bank b[5]; 
    int i; 
 
    for(i = 0; i < 5; i++) { 
        printf("\nEnter name, Account No. and balance %d: ", i + 1); 
        scanf("%s %d %f", b[i].name, &b[i].Acount, &b[i].balance); 
    } 
 
    printf("\nPeople with balance less than 500:\n"); 
    for(i = 0; i < 5; i++) { 
        if(b[i].balance < 500) { 
            printf("%s %d %.2f\n", b[i].name, b[i].Acount, b[i].balance); 
        } 
    } 
    return 0; 
}