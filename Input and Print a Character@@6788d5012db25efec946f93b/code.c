#include <stdio.h>
hashtag#include <dirent.h>

int main() {
 struct dirent *entry;
 DIR *directory = opendir(".."); 

 if (directory == NULL) {
 printf("Could not open parent directory\n");
 return 1;
 }

 printf("Files in the parent directory:\n");
 while ((entry = readdir(directory)) != NULL) {
 printf("%s\n", entry->d_name);
 }

 closedir(directory);
 return 0;
}