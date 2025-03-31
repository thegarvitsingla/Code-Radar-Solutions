#include <stdio.h>

int main() {
    
    int size;
    scanf("%d",&size);
    int list[50];
    for (int i = 0; i <size ; i++){
        scanf("%d",&list[i]);
    }

    int largest  = list[0];
    int second = list[0];
    for (int j=0 ; j<size ; j++){
        if (list[j] > largest){
           largest = list[j]
            
        }
    }
    for (int i = 0; i < size ; i ++){
        if (largest == list[i]){
            list[i] = 0;
            break;
        }
    }
    for (int j = 0 ; j<size ; j++){
        if (list[j] > second){
            second = list[j];

        }
    }
    printf("%d",second);
    return 0;
}
