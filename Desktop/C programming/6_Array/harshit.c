#include <stdio.h>


int main() {
     system("cls");

    int arr[6] = {1,2,3,4,2,6};

    int x = 0;
    int y = 0;

    for (int i = 0; i < 6; i++) {
        
        
            if (y < arr[i] && y!=arr[i]) {
                y = arr[i];
            } 
    
    }


    printf("%d", y);

    return 0;
}