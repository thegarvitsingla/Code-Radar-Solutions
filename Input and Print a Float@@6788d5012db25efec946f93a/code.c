#include <dirent.h>
#include <stdio.h>

int main(void) {
    // Open the current directory
    DIR *dir;
    struct dirent *ent;

    if ((dir = opendir(".")) != NULL) {
        while ((ent = readdir(dir)) != NULL) {
            // Print the file/directory name
            printf("%s\n", ent->d_name);
        }
        closedir(dir);
    } else {
        // Handle error if directory cannot be opened
        perror("Could not open directory");
    }

    return 0;
}
