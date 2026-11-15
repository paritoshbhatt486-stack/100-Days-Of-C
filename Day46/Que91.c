#include <stdio.h>

int main() {
    char str[100], result[100];
    int i, j = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    // Loop through each character of the string
    for (i = 0; str[i] != '\0'; i++) {
        // Check if the character is NOT a vowel (both lowercase and uppercase)
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' &&
            str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U') {
            
            // Copy the non-vowel character to the result string
            result[j] = str[i];
            j++;
        }
    }

    // Add the null terminator at the end of the new string
    result[j] = '\0';

    printf("Output: %s\n", result);

    return 0;
}
