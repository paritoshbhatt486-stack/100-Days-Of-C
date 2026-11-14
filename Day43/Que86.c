#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len;
    int isPalindrome = 1; // Assume the string is a palindrome initially

    // Read the input string
    scanf("%s", str);

    // Find the length of the string
    len = strlen(str);

    // Compare characters from start and end
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            isPalindrome = 0; // Not a palindrome
            break;
        }
    }

    // Print the result
    if (isPalindrome == 1) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }

    return 0;
}
