#include <stdio.h>

int main() {
    char str[100];
    int i;

    // Read a line of text including spaces
    fgets(str, sizeof(str), stdin);

    // Loop through each character until the end of the string
    for (i = 0; str[i] != '\0'; i++) {
        // Check if the current character is a space
        if (str[i] == ' ') {
            str[i] = '-'; // Replace space with a hyphen
        }
    }

    // Print the updated string
    printf("%s", str);

    return 0;
}
