#include <stdio.h>

int main() {
    char text[500];
    FILE *file;

    // 1. Open the file in "append" mode ("a")
    file = fopen("data.txt", "a");

    // Check if the file opened properly
    if (file == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    // 2. Get a line of text from the user
    printf("Enter a line to append: ");
    fgets(text, sizeof(text), stdin);

    // 3. Write the text to the file and close it
    fprintf(file, "%s", text);
    fclose(file);

    printf("Text appended successfully!\n");

    return 0;
}
