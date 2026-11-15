#include <stdio.h>

int main() {
    char str[100];
    int count[26] = {0}; // Array to keep track of each lowercase letter (a-z)
    int found = 0;

    // Take string input from the user
    printf("Enter a string: ");
    scanf("%s", str);

    // Loop through each character in the string
    for (int i = 0; str[i] != '\0'; i++) {
        // Check if the character is a lowercase alphabet
        if (str[i] >= 'a' && str[i] <= 'z') {
            int index = str[i] - 'a'; // Find index (0 for 'a', 1 for 'b', ..., 25 for 'z')
            
            // If this letter was already seen before, it is the first repeating one
            if (count[index] == 1) {
                printf("First repeating lowercase alphabet: %c\n", str[i]);
                found = 1;
                break; // Stop the loop immediately
            }
            
            // Mark the letter as seen
            count[index]++;
        }
    }

    // If no repeating lowercase letter was found
    if (found == 0) {
        printf("No repeating lowercase alphabet found.\n");
    }

    return 0;
}
