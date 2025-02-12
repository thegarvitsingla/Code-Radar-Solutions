#include <stdio.h>

int main() {
    char name[50];
    int age;
    char hobby[50];
    
    // %s is used for strings, not %str
    scanf("%s %d %s", name, &age, hobby);
    
    // Use %s for strings, and add newlines for better formatting
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Hobby: %s\n", hobby);
    
    return 0;
}