#include <stdio.h>
int main (void)
{
    int number;
    scanf("%d",&number);

    for (in i =1; i <= number ; i++){
        for (int j =0 ; j < i; j++ ){
            printf("%d",i);
        }
        printf("\n");
    }
}