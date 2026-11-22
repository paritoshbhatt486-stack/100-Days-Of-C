#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Enter a sentence: ");
    scanf("%[^\n]s", str); // Reads full sentence including spaces

    // Capitalize the very first letter if it is lowercase
    if (str[0] >= 'a' && str[0] <= 'z') {
        str[0] = str[0] - 32;
    }

    // Check the rest of the sentence
    for (i = 1; str[i] != '\0'; i++) {
        // If there is a space before a lowercase letter, capitalize it
        if (str[i - 1] == ' ' && (str[i] >= 'a' && str[i] <= 'z')) {
            str[i] = str[i] - 32;
        }
    }

    printf("Result: %s\n", str);

    return 0;
}
