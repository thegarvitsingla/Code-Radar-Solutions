#include <stdio.h>



int main() {
   int a;
   int b;
   int c;
   scanf("%i",&a);
   scanf("%i",&b);
   scanf("%i",&c);
   int sum = a + b+c;
   int avg = sum / 3;
   printf("Average %f",avg);
}