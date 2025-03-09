#include <stdio.h>

int main() {
    FILE *filePointer;

    char filePath[] = "./run";

    filePointer = fopen(filePath, "r");

    if (filePointer == NULL) {
        printf("Could not open file %s\n", filePath);
        return 1; 
    }

    char line[100];
    while (fgets(line, sizeof(line), filePointer)) {
        printf("%s", line);
    }

    fclose(filePointer);

    return 0;
}
