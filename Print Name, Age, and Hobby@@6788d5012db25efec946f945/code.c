#include <stdio.h>


int main() {
    char name[50];
    int age;
    char hobby[50];
    scanf("%s,%d,%s",&name,&age,&hobby);
    printf("Name: %s\n",name);
    printf("Age: %i\n",age);
    printf("Hobby: %s",hobby);
}