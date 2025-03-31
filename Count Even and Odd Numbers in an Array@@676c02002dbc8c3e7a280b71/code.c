#include <stdio.h>

int main (void){

    int size;
    scanf("%d",&size);
    int list[size];
    int even,odd =1;
    for (int i = 0 ; i <size ; i++){
        scanf("%d",&list[i]);
    }
    for (int j =0 ; j < size ;j++){
        if (list[i] %2 ==0){
            even = even + 1;
        }else{
            od = odd+1;
        }
    }
    printf("%d %d",even,odd);
}