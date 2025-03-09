#include <stdio.h>
#include <dirent.h>
#include <string.h>
#include <errno.h>

void listFiles(const char *path) {
    DIR *dir;
    struct dirent *dp;

    // Open the directory
    dir = opendir(path);
    if (!dir) {
        fprintf(stderr, "Could not open directory '%s': %s\n", path, strerror(errno));
        return;
    }

    // Read and print directory entries
    while ((dp = readdir(dir)) != NULL) {
        if (strcmp(dp->d_name, ".") == 0 || strcmp(dp->d_name, "..") == 0)
            continue; // Skip current and parent directories

        printf("%s\n", dp->d_name);

        // Check if it's a subdirectory
        if (dp->d_type == DT_DIR) {
            char newPath[256];
            sprintf(newPath, "%s/%s", path, dp->d_name);
            listFiles(newPath); // Recursively list subdirectory
        }
    }

    // Close the directory
    if (closedir(dir) != 0) {
        fprintf(stderr, "Error closing directory: %s\n", strerror(errno));
    }
}

int main() {
    char path[100];
    printf("Enter path to list files: ");
    scanf("%99s", path); // Prevent buffer overflow

    listFiles(path);

    return 0;
}
