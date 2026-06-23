#include <stdio.h>
 struct Employe
{
    int emp_id;
    char name[30];
    float salary;
    int ratting;

};

 
int main() { 
    system("cls");
    int n;printf("Enter a number of Employee :\n");scanf("%d",&n);
    struct Employe E[n];
    for(int i=0;i<n;i++){
        getchar();
        printf("Enter Your Employee %d Datail:\nEmp_id\nName\nSalary\nRatting\n",(i+1));
        scanf("%d %[^\n] %f %d",&E[i].emp_id,  E[i].name, &E[i].salary,&E[i].ratting);
    }

float max=E[0].salary;
int a=0;

    for(int j=0;j<n;j++){
        if(E[j].ratting>=4){
         printf("%d %s %.2F %d\n",E[j].emp_id,  E[j].name, E[j].salary,E[j].ratting);   
        }
       
    }
    for(int j=0;j<n;j++){
        
         if(max<E[j].salary){
               max=E[j].salary;
              a=j; 
        }
    }
  
   printf("%d %s %.2F %d",E[a].emp_id,  E[a].name, E[a].salary,E[a].ratting); 
   
    
     
    
    return 0; 
}