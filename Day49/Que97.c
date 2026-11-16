#include <stdio.h>
#include <ctype.h>

int main() {
    char name[100];
    int i;

    printf("Enter a full name: ");
    // fgets reads the entire line including spaces
    fgets(name, sizeof(name), stdin);

    // Print the first initial if the input is not empty
    if (name[0] != '\0' && name[0] != '\n') {
        printf("%c.", toupper(name[0]));
    }

    // Loop through the rest of the string
    for (i = 1; name[i] != '\0'; i++) {
        // If a space is found, print the next character as an uppercase initial
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0' && name[i + 1] != '\n') {
            printf("%c.", toupper(name[i + 1]));
        }
    }

    printf("\n");
    return 0;
}
