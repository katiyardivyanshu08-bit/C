#include <stdio.h>

// Another Method by using return

//void sq(int s);

int fact(int n1){       //void fact(int n1){
    int f=1;
    while (n1>0) {
        f=f*n1;
        n1=n1-1;
    }
    printf("%d",f);
    return f;        //sq(f);
}
// Square of factorial
void sq(int s){
    printf("\n");
    printf("%d",s*s);
}

int main() {
    int n;
    printf("Enter a no. ");
    scanf("%d",&n);
    int s= fact(n);
    sq(s);
}
/*
#include <stdio.h>
// Another Method by using return
void sq(int n){
    int sqr=n*n;
    printf("%d",sqr);
}
int fact(int n1){       //void fact(int n1){
    int f=1;
    for(int i=1;i<=n1;i++){
        f=f*i;
    } 
    return f;     
}
int main(){
    int f=fact(4);
    sq(f);
}
*/
