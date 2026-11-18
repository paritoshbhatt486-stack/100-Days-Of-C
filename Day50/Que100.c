#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%s", str);

    int n = strlen(str);

    // Loop 1: Pick the starting index
    for (int i = 0; i < n; i++) {
        // Loop 2: Pick the ending index
        for (int j = i; j < n; j++) {
            // Loop 3: Print characters from start (i) to end (j)
            for (int k = i; k <= j; k++) {
                printf("%c", str[k]);
            }

            // Print a comma after every substring except the very last one
            if (!(i == n - 1 && j == n - 1)) {
                printf(",");
            }
        }
    }

    return 0;
}
