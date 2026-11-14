#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    // Read the string from the user
    fgets(str, sizeof(str), stdin);

    // Loop through the string until the null character '\0' is reached
    while (str[count] != '\0') {
        // Stop counting if a newline character is encountered
        if (str[count] == '\n') {
            break;
        }
        count++;
    }

    // Print the total count
    printf("%d\n", count);

    return 0;
}
