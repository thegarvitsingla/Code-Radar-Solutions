#include <stdio.h>
#include <dirent.h>

int main() {
    struct dirent *entry;
    DIR *directory = opendir(".");

    if (directory == NULL) {
        printf("Could not open current directory\n");
        return 1;
    }

    printf("Files in the current directory:\n");
    while ((entry = readdir(directory)) != NULL) {
        printf("%s\n", entry->d_name);
    }

    closedir(directory);
    return 0;
}
