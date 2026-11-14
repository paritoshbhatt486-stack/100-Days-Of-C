#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Loop through each character until the end of the string ('\0')
    while (str[i] != '\0') {
        // Check if the character is a lowercase letter
        if (str[i] >= 'a' && str[i] <= 'z') {
            // Subtract 32 to convert it to uppercase
            str[i] = str[i] - 32;
        }
        i++;
    }

    // Print the result
    printf("Uppercase string: %s", str);

    return 0;
}
