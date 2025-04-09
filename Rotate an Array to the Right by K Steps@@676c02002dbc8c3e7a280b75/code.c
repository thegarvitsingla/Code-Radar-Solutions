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
    
    for (int d = 0 ; d < positions ; d++){
        int last  = list[size-1];
        for (int k = size -1 ; k >  0 ; k--){
            // list[k + 1] = list[k];
            list[k] = list [k-1];


        }
        list[0] = last;
    }

    for (int m = 0; m< size ; m++){
        printf("%d ",list[m]);
    }
}