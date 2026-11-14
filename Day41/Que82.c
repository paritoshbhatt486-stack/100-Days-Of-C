#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    // Read the input string
    scanf("%s", str);

    // Loop through the string until the null terminator ('\0')
    while (str[i] != '\0') {
        printf("%c\n", str[i]);
        i++;
    }

    return 0;
}
