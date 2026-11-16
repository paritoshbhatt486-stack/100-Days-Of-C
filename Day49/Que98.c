#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i, lastSpace = -1;

    // Take the full name as input
    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    // Remove the trailing newline character added by fgets
    name[strcspn(name, "\n")] = '\0';

    int len = strlen(name);

    // Step 1: Find the index of the last space (which comes right before the surname)
    for (i = 0; i < len; i++) {
        if (name[i] == ' ') {
            lastSpace = i;
        }
    }

    // Step 2: Print the first initial (if the name is not empty)
    if (len > 0 && name[0] != ' ') {
        printf("%c.", name[0]);
    }

    // Step 3: Print initials of any middle names (characters right after a space, before the last space)
    for (i = 1; i < lastSpace; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ') {
            printf("%c.", name[i + 1]);
        }
    }

    // Step 4: Print the full surname (everything after the last space)
    if (lastSpace != -1) {
        printf(" %s\n", &name[lastSpace + 1]);
    } else {
        // Fallback if only one word (no spaces) was entered
        printf("\n");
    }

    return 0;
}
