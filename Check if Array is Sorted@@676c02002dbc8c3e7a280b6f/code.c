#include <stdio.h>
#include <stdbool.h>

// Your code here...

int main (void){
   int size;
   bool issorted = true;
   scanf("%d",&size);
   int list[size];
   for (int i = 0 ; i < size ; i++){
    scanf("%d",&list[i]);
   }
    
    for (int k = 0 ; k < size ; k){
        int first = list[0];
        if (first > list[i]){
            issorted = false;
        }
    }
    if (issorted){
        printf("Sorted");
    }else if{
        printf("Not Sorted");
    }
  
}