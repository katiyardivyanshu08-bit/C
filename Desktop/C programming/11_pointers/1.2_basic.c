int main() {
    system("cls");
    int a=25;
    int* x=&a;
    int* y=&x;
    printf("%p\n",&x);  
    printf("%p",y);  
    return 0;
}