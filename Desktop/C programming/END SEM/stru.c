#include <stdio.h>

 struct student
{
   char name[100];
   int roll;
   char course[100];
   int year;
};

void studentroll(struct student s[],int n,int year ){
   int count=0;
   for(int i=0;i<n;i++){
    if(s[i].roll==n){
        printf("%c",s[i].name);
        count=1;
    }
    
   }
   if(!count){printf("Invalid Roll ");}
}
void studentyear(struct student s[],int n,int year ){
   int count=0;
   for(int i=0;i<n;i++){
    if(s[i].year==year){
        printf("%c",s[i].name);
        count=1;
    }
    
   }
   if(!count){printf("Invalid Year ");}
}


int main(){
     system("cls");
    
    int n;
    printf("Enter a student");
    scanf("%d",&n);
    struct student students[n];
    
    for(int i=0;i<n;i++){
        getchar();
        scanf("%[^\n] %d %[^\n] %d",students[i].name,&students[i].roll,&students[i].course,&students[i].year);
    }

    printf("Enter a Choice\n1:roll\n2:roll\n3:year");
    int choice;
    scanf("%d",&choice);
    int repeat=0;
while(repeat){
    switch (choice)
    {
    case 1:{printf("Enter a roll ");
        int r;
        scanf("%d",&r);
        void studentroll(struct student s[],int r,int year );
repeat=0;
break;}
    case 2:{printf("Enter a year ");
        int year;
        scanf("%d",&year);
        void studentroll(struct student s[],int r,int year );
repeat=0;
break;}
    case 3:{  repeat=1;
                break;
            default:
                printf("Invalid choice!\n");
    }
    }

}
    return 0;
}