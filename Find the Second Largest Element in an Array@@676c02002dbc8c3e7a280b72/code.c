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
            list[j] = 0;
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
