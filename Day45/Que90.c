#include <stdio.h>

int main() {
    char str[100];

    // Read the string from the user
    fgets(str, sizeof(str), stdin);

    // Loop through each character until the null terminator
    for (int i = 0; str[i] != '\0'; i++) {
        
        // If uppercase, convert to lowercase
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
        // If lowercase, convert to uppercase
        else if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }

    // Print the modified string
    printf("%s", str);

    return 0;
}
