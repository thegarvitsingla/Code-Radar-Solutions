#include <stdio.h>
#include <stdlib.h>

int main() {
    extern char **environ; 
    char **env = environ;

    while (*env) {
        printf("%s\n", *env);
        env++;
    }

    return 0;
}
