// Press Ctrl+C to stop infinite loop
#include <stdio.h>
int main() {
// 1.
    /* int i,j;
    for(i=1;i<=5;i++) {
        for (j=1;j<=4;j++){
            printf("1 ");
        }
        printf("\n"); // For new line or blank line
    }       
*/

 //  x+x2+x3 +...
    
// 2. 
   /* int i,j;
    for(i=1;i<=5;i++) {
        for (j=0;i-j;j++){
            printf("1 ");
        }
        printf("\n");
    } */
// 3.
   /* int i,j;
     for(i=5;i>=1;i--) {
        for (j=0;i-j;j++){
            printf("1 ");
        }
        printf("\n");
    }*/
// 4.
   /* int i,j;
     for(i=4;i>=0;i--) {
        for (j=0;j<=4;j++){
        if (i-j<=0) {
            printf("1 ");
        }
        else {
            printf("  ");
        }
    } printf("\n");
}*/
    /* int i,j;
     for(i=4;i>=0;i--) {
        for (j=0;j<=4;j++){
        if (i-j<=0) {
            printf("1 ");
        }
        else {
            printf(" ");
        }
    } printf("\n");
} */

int i,j;
     for(i=1;i<=3;++i) {
        for(j=1;j<=5;++j) {
            printf("1 ");
        }
        printf("\n");
     }
printf("\n");

    for(i=1;i<=5;i++) {
        for (j=0;i-j;j++){ // j=1,j<=i
            printf("2 ");
        }
        printf("\n");
    }
printf("\n");
    int s=0;
    for(i=1;i<=5;i++) {
        for (j=1;j<=i;j++){
            s=s+1;
            printf("%d ",s);
        }
        printf("\n");
    }
printf("\n");
    for(i=1;i<=5;i++) {
        for (j=1;j<=5;j++) {
            if((i+j)>=6) {
                printf("# ");
            }
            else {
                printf("  "); 
            }
        }
        printf("\n");
    }
printf("\n");
}

