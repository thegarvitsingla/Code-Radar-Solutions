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
        if (list[i] > largest){
            list[i] = 0;
        }
    }
    for (int j = 0 ; j<size ; j++){
        if (list[i] > second){
            second = list[i];

        }
    }
    printf("%d",second);
    return 0;
}
