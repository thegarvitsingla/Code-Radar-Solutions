#include <stdio.h>
// Your code here...
int main (void){

    int size;
    int positions;
    scanf("%d",&size);
    int list[size];
    int temp;
    for (int i = 0 ; i < size ; i++ ){
        scanf("%d",&list[i]);
    }
    scanf("%d",&positions);
    
    for (int d = 0 ; d < positions ; j++){
        int last  = list[size-1];
        for (int k = 0 ; k < size ; k++){
            list[k + 1] = list[k];
        }
        list[0] = last;
    }

    for (int m = 0; m< size ; m++){
        printf("%d",list[m]);
    }
}