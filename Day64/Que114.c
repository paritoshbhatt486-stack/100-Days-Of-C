#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    int maxLength = 0;

    // Take string input from the user
    printf("Enter a string: ");
    scanf("%s", s);

    int n = strlen(s);

    // Outer loop picks the starting character of the substring
    for (int i = 0; i < n; i++) {
        // Array to keep track of visited characters (ASCII size is 256)
        int visited[256] = {0};
        int currentLength = 0;

        // Inner loop extends the substring until a duplicate is found
        for (int j = i; j < n; j++) {
            // If character is already visited, break out of the inner loop
            if (visited[(int)s[j]] == 1) {
                break;
            } else {
                // Mark character as visited and increase current length
                visited[(int)s[j]] = 1;
                currentLength++;
            }
        }

        // Update maxLength if we found a longer valid substring
        if (currentLength > maxLength) {
            maxLength = currentLength;
        }
    }

    // Print the final result
    printf("%d\n", maxLength);

    return 0;
}
