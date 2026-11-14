#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int length, i;

    // Take string input from the user
    scanf("%s", str);

    // Find the length of the string
    length = strlen(str);

    // Loop backward from the last character to the first
    for (i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    printf("\n");

    return 0;
}
