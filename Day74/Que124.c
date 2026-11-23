#include <stdio.h>

int main() {
    char source_name[100], dest_name[100];
    FILE *source, *dest;
    int ch;

    // 1. Get file names from the user
    printf("Enter source filename: ");
    scanf("%s", source_name);

    printf("Enter destination filename: ");
    scanf("%s", dest_name);

    // 2. Open both files
    source = fopen(source_name, "r");
    if (source == NULL) {
        printf("Error: Cannot open source file.\n");
        return 1;
    }

    dest = fopen(dest_name, "w");
    if (dest == NULL) {
        printf("Error: Cannot create destination file.\n");
        fclose(source);
        return 1;
    }

    // 3. Copy content character by character
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, dest);
    }

    // 4. Close files and finish
    printf("File copied successfully!\n");
    fclose(source);
    fclose(dest);

    return 0;
}
