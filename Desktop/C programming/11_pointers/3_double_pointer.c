int main() {
    system("cls");
    int a=25;
    int* x=&a;
    int** y=&x;
    int*** z=&y;

    printf("%d\n",a);  
    printf("%d\n",*x);  
    printf("%d\n",**y);  //double
    printf("%d\n",***z);  //tripple
     
    return 0;
}