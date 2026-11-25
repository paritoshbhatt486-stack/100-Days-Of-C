#include <stdio.h>
#include <string.h>

typedef enum {
    SUCCESS,
    FAILURE,
    TIMEOUT
} Result;

int main(void) {
    char input[20];

    if (scanf("%19s", input) != 1) {
        return 1;
    }

    if (strcmp(input, "SUCCESS") == 0) {
        puts("Operation succeeded");
    } else if (strcmp(input, "FAILURE") == 0) {
        puts("Operation failed");
    } else if (strcmp(input, "TIMEOUT") == 0) {
        puts("Operation timed out");
    }

    return 0;
}