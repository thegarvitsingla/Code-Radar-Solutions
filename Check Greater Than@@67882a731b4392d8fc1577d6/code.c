#include <stdio.h>


int main() {
    int first;
    int second;
    scanf("%i %i",&first,&second);
    printf("%i and %i",first,second);
    if (first>>second){
        printf("True");
    }else{
        printf("False");
    }
}