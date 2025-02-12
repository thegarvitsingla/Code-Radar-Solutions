// Your code here...
#include <stdio.h>

int main (){
    int number;
    scanf("%d",&number);
    for (int i =number ; i>0;i--){
       for (int j=i ; j>0;j--){
        printf("* ");
       }
       printf("\n");
    }
}
