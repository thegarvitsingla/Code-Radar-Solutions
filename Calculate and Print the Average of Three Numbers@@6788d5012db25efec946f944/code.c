#include <stdio.h>



int main() {
   int a;
   int b;
   int c;
   scanf("%d",&a);
   scanf("%d",&b);
   scanf("%d",&c);
   double avg = (a+b+c) / 3;
   printf("Average: %.2lf",avg);
}