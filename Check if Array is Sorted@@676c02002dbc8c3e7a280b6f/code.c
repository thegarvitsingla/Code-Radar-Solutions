#include <stdio.h>
// Your code here...

int main (void){
   int size;
   scanf("%d",&size);
   int list[size];
   for (int i = 0 ; i < size ; i++){
    scanf("%d",&list[i]);
   }

   for (int j = 0 ; j < size ;j++){
    printf("%d",list[j]);
   }
}