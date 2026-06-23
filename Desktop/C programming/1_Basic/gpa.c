#include <stdio.h>
int main()
{ system("cls");
    float pro,eng,phyl,mat,phy,prol,fe,fel,ai ,credit,GPA,n1,n2,n3,n4,n5,n6,n7,n8,n9,total;
    printf("Total marks of exam : ");                     scanf("%f",&total);
    printf("1 Enter your Programming marks : ");          scanf("%f",&pro);  
    printf("Creadit : ");                                scanf("%f",&n1);
    pro=(pro/total)*100;

    printf("2 Enter your Programming lab marks : ");      scanf("%f",&prol);
    printf("Creadit : ");                                scanf("%f",&n2); 
    prol=(prol/total)*100;

    printf("3 Enter your Physics marks : ");              scanf("%f",&phy); 
    printf("Creadit : ");                                scanf("%f",&n3);
    phy=(phy/total)*100;

    printf("4 Enter your Physics Lab marks : ");          scanf("%f",&phyl); 
    printf("Creadit : ");                                scanf("%f",&n4);
    phyl=(phyl/total)*100;

    printf("5 Enter your Maths marks : ");                scanf("%f",&mat);  
    printf("Creadit : ");                                scanf("%f",&n5);
    mat=(mat/total)*100;

    printf("6 Enter your Fronted Eng marks : ");          scanf("%f",&fe);   
    printf("Creadit : ");                                scanf("%f",&n6);
    fe=(fe/total)*100;

    printf("7 Enter your Fronted Eng  Lab marks : ");     scanf("%f",&fel);  
    printf("Creadit : ");                                scanf("%f",&n7);
    fel=(fel/total)*100;

    printf("8 Enter your Ai marks : ");                   scanf("%f",&ai);   
    printf("Creadit : ");                                scanf("%f",&n8);
    ai=(ai/total)*100;

    printf("9 Enter your Eng.Communication  marks : ");   scanf("%f",&eng);  
    printf("Creadit : ");                                scanf("%f",&n9);
    eng=(eng/total)*100;

    credit=n1+n2+n3+n4+n5+n6+n7+n8+n9;

    printf("Your total creadit is : %f",credit);

    GPA=((pro*n1)+(prol*n2)+(phy*n3)+(phyl*n4)+(mat*n5)+(fe*n6)+(fel*n7)+(ai*n8)+(eng*n9))/(credit*10);

    printf("Your GPA is : %f",GPA);

    return 0;
}
