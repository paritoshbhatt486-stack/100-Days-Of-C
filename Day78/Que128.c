#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file = fopen("text.txt", "r");
    char ch;
    int vowels = 0, consonants = 0;

    // Check if the file exists
    if (file == NULL) {
        printf("Could not open file.\n");
        return 1;
    }

    // Read the file one character at a time
    while ((ch = fgetc(file)) != EOF) {
        ch = tolower(ch); // Convert letter to lowercase

        // Check if it is an alphabet letter
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    fclose(file);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
