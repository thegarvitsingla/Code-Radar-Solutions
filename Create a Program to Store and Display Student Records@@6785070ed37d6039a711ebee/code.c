// Your code here...#include <stdio.h>

int main() {
    // Declare a pointer to the file
    FILE *filePointer;

    // Specify the path to the file you want to open
    char filePath[] = "./a.out";

    // Open the file in read mode ("r")
    filePointer = fopen(filePath, "r");

    // Check if the file was successfully opened
    if (filePointer == NULL) {
        printf("Could not open file %s\n", filePath);
        return 1; // Exit with an error code
    }

    // Now you can read from the file using functions like fscanf() or fgets()
    char line[100];
    while (fgets(line, sizeof(line), filePointer)) {
        printf("%s", line);
    }

    // Close the file when you're done
    fclose(filePointer);

    return 0;
}
