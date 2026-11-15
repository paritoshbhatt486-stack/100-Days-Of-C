#include <stdio.h>

int main() {
    char str[100], ch;
    int count = 0;

    // Read the string from the user
    scanf("%s", str);

    // Read the target character (space before %c skips the leftover newline)
    scanf(" %c", &ch);

    // Loop through each character of the string until the null terminator
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    // Print the final count
    printf("%d\n", count);

    return 0;
}
