 #include <stdio.h>
int main()
{ system("cls");
    int i,n,a,b;
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if ((i+j)%2==0 )printf("1");
            else printf("0");
        }printf("\n");
    }

    // for(int i=1;i<=n;i++){ 
    //     if(i%2!=0) a=1;
    //     else a=0;
    //      for(int j=1;j<=i;j++) {   
            
    //         printf("\t%d",a);
    //         if (a==0) a=1;
    //         else a=0;
            
            
    //     }printf("\n");
    // } 
        
        
   return 0;  }
   
