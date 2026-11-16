#include <stdio.h>
#include <string.h>

// Helper function to reverse characters between start and end indices
void reverseWord(char str[], int start, int end) {
    char temp;
    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[200];
    int start = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Remove the trailing newline character added by fgets
    str[strcspn(str, "\n")] = '\0';

    int len = strlen(str);

    // Loop through the string to find word boundaries
    for (int i = 0; i <= len; i++) {
        // When a space or the end of the string is reached, reverse the word
        if (str[i] == ' ' || str[i] == '\0') {
            reverseWord(str, start, i - 1);
            start = i + 1; // Move start to the beginning of the next word
        }
    }

    printf("Output: %s\n", str);

    return 0;
}
