#include <stdio.h>
// Your code here...


int main (void){
    int size;
    scanf("%d",&size);
    int list[size];
    for (int j = 0 ; j < size ; j++){
        scanf("%d",&list[j]);
    }
    for (int i = 0 ; i< size ; i ++ ){
        if (list[i] > list[i-1] && list[i] > list[i +1]){
            int peak = list[i];
            break;
        }
    }
    printf("%d",peak);
}