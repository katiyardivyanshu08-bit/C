# include <stdio.h>
int main () {
    int n1,n2,ch;
    scanf("%d %d",&n1,&n2);
    printf("Enter choices:\n 1 for greatest no.\n 2 for positive no. \n3 for even no.");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        { if (n1>n2)
        printf(" n1 is greater no."); 
        else {printf("n2 is greater no.");}
        }
        case 2:
        {
            if ((n1>0) && (n2>0))
            {printf("Both numbers are +ve");}
            else {
                printf("Both numbers or one of the no. are -ve");
            }
        }
        case 3:
        { if  (((n1%2)==0) && ((n2%2)==0))
            { printf("Both no. are +ve"); }
        else {
            printf("Both numbers or one of the no. are odd");
        }
        
        }
    }
}