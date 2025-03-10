#include <stdio.h>
#include <dirent.h>
int listFiles;
int bubbleSort(const char *path) {
    struct dirent *entry;
    DIR *directory = opendir(path);

    if (directory == NULL) {
        printf("Could not open directory\n");
        return 1;
    }

    while ((entry = readdir(directory)) != NULL) {
        printf("%s\n", entry->d_name);
    }

    closedir(directory);
}

int main() {
    listFiles("."); // "." refers to the current directory
    return 0;
}
