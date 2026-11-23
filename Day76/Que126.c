#include <stdio.h>

int main() {
    char filename[100];
    char ch;

    // 1. Ask the user for the file name
    printf("Enter filename: ");
    scanf("%s", filename);

    // 2. Try to open the file in read ("r") mode
    FILE *file = fopen(filename, "r");

    // 3. Check if the file exists
    if (file == NULL) {
        printf("Error: File not found!\n");
        return 1;
    }

    // 4. Read and print the file character by character
    printf("File content:\n");
    while ((ch = fgetc(file)) != EOF) {
        printf("%c", ch);
    }

    // 5. Close the file
    fclose(file);
    return 0;
}
