// Your code here...
#include <stdio.h>

int main (){
    int number;
    scanf("%d",&number);
    for (int i =0 ; i< number;i++){
       for (int j=number ; j<=0;j--){
        printf("*");
       }
       printf("\n");
    }
}
