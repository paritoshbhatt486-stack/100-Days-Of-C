#include <stdio.h>

int main() {
    char str[100];
    int i, spaces = 0, digits = 0, special = 0;

    // Read a line of text including spaces
    fgets(str, sizeof(str), stdin);

    // Loop through each character until the end of the string
    for (i = 0; str[i] != '\0'; i++) {
        // Ignore the newline character added by fgets()
        if (str[i] == '\n') {
            continue;
        }
        // Check for space
        else if (str[i] == ' ') {
            spaces++;
        }
        // Check for digits (0 to 9)
        else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        }
        // Ignore alphabets (a-z and A-Z)
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            continue;
        }
        // Anything else is a special character
        else {
            special++;
        }
    }

    // Print the result in the required format
    printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, special);

    return 0;
}
