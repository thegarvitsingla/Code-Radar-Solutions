#include <stdio.h>

int main (void){
    int size;
    scanf("%d",&size);
    int list[size];
    for (int i = 0 ; i < size ; i ++){
        scanf("%d",&list[i]);
    }

    int least =  list[0];
    int max = list[0];
    for (int i =0 ; i< size ; i++){
        if (list[i] > max){
            max = list[i];
        }
        if (list[i] < least){
            least  = list[i];
        }
    }

    printf("%d %d",least,max);
}