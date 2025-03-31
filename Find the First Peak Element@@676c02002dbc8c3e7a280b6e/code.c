#include <stdio.h>
// Your code here...


int main (void){
    int size;
    scanf("%d",&size);
    int list[size];
    for (int j = 0 ; j < size ; j++){
        scanf("%d",&list[j]);
    }
     int peak = list[size-1];
    for (int i = 0 ; i< size ; i ++ ){
        if (list[i] > list[i-1] && list[i] > list[i +1]){
            peak = list[i];
            break;
        }else if(list [i] == list[i+1]){
            peak = -1;
            
        }
    }
    printf("%d",peak);
}