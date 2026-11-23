#include <stdio.h>

int main(void) {
    FILE *file = fopen("sample.txt", "r");

    if (file == NULL) {
        perror("Could not open sample.txt");
        return 1;
    }

    int ch;
    int in_word = 0;
    int last_char = '\0';
    long characters = 0;
    long words = 0;
    long lines = 0;

    while ((ch = fgetc(file)) != EOF) {
        characters++;
        last_char = ch;

        if (ch == '\n') {
            lines++;
        }

        if (ch == ' ' || ch == '\n') {
            in_word = 0;
        } else if (!in_word) {
            words++;
            in_word = 1;
        }
    }

    /* Count a final line that has no newline at the end. */
    if (characters > 0 && last_char != '\n') {
        lines++;
    }

    fclose(file);

    printf("Characters: %ld\n", characters);
    printf("Words: %ld\n", words);
    printf("Lines: %ld\n", lines);

    return 0;
}