#include <stdio.h>

int main (void)
{
    int size;
    scanf("%d",&size);
    int list[size];
    int temp;
    int counter = 0;
    for (int i = 0; i <size ; i++){
        scanf("%d",&size[i]);
    }

    for (int k = 0 ; k<size ; k++){
        temp = list[k];
        counter = 0;
        if (temp == 0) continue;

        for (int l = k ; l<size ; l++){
            if (temp == list[l]){
                counter++;
                list[l]=0;
            }
        }

        printf("%d ",temp);
        printf("%d",counter);
        printf("\n");
    }
}