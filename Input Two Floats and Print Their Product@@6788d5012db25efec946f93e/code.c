#include <stdio.h>
#include <stdlib.h>

int main() {
    extern char **environ;  // Global variable holding environment variables
    char **env = environ;

    while (*env) {
        printf("%s\n", *env);
        env++;
    }

    return 0;
}
