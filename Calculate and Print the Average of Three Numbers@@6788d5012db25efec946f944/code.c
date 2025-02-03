#include <stdio.h>



int main() {
   int a;
   int b;
   int c;
   scanf("%d",&a);
   scanf("%d",&b);
   scanf("%d",&c);
   int sum = a+b+c;
   double avg = sum / 3;
   printf("Average: %.2lf",avg);
}