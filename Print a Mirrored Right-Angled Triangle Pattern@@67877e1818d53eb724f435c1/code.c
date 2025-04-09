// Your code here...
#include <stdio.h>

int main () {
    int number;
    scanf("%d",&number);
    for (int i =1; i<=number;i++){
        for (int j = 0 ; j <= i -1 ; j++){
            printf("#");
        }
        for (int k =0 ; k<i ; k++){
            printf("*");
        }
        printf("\n");

        
    }
}