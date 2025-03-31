#include <stdio.h>
// Your code here...
int main (void){

    int size;
    int positions;
    scanf("%d",&size);
    int list[size];
    int temp;
    for (int i = 0 ; i <= size ; i++ ){
        scanf("%d",&temp);
        list[i] = temp;
    }
    scanf("%d",&positions);
    for (int j = 0 ; j <= size ; j ++ ){
        int num = list[j];
        printf("%d",num);
    }
    printf("%d positiond is ",positions);
}