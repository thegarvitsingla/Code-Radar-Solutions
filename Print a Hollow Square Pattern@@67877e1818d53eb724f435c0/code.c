// Your code here...
#include <stdio.h>

int main (){
    int number;
    scanf("%d",&number);
    for (int i = 1; i<=number; i++){
        if (i==1 || i==number){
            for (int j =0; j<number;j++){
                printf("*");
            }
            printf("\n");
        }
    }
}