#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200];
    char currentWord[50], longestWord[50];
    int i = 0, j = 0, maxLen = 0;

    // Read the entire sentence including spaces
    fgets(sentence, sizeof(sentence), stdin);

    while (1) {
        // Check if we reached a space, newline, or the end of the string
        if (sentence[i] == ' ' || sentence[i] == '\n' || sentence[i] == '\0') {
            currentWord[j] = '\0'; // End the current word

            // If the current word is longer than our previous longest, update it
            if (j > maxLen) {
                maxLen = j;
                strcpy(longestWord, currentWord);
            }

            j = 0; // Reset index for the next word

            // Stop the loop if we hit the end of the sentence
            if (sentence[i] == '\0') {
                break;
            }
        } else {
            // Add the character to the current word
            currentWord[j] = sentence[i];
            j++;
        }
        i++;
    }

    printf("%s\n", longestWord);

    return 0;
}
