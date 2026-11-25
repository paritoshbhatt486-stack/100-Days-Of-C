#include <stdio.h>
#include <string.h>

// Define enum for menu choices
enum Operation {
    ADD,
    SUBTRACT,
    MULTIPLY,
    INVALID
};

int main() {
    char choice[20];
    int num1, num2;
    enum Operation op;

    // Read the operation string and two numbers
    scanf("%s %d %d", choice, &num1, &num2);

    // Map the input string to the corresponding enum value
    if (strcmp(choice, "ADD") == 0) {
        op = ADD;
    } else if (strcmp(choice, "SUBTRACT") == 0) {
        op = SUBTRACT;
    } else if (strcmp(choice, "MULTIPLY") == 0) {
        op = MULTIPLY;
    } else {
        op = INVALID;
    }

    // Perform the operation using switch
    switch (op) {
        case ADD:
            printf("%d\n", num1 + num2);
            break;
        case SUBTRACT:
            printf("%d\n", num1 - num2);
            break;
        case MULTIPLY:
            printf("%d\n", num1 * num2);
            break;
        default:
            printf("Invalid Operation\n");
    }

    return 0;
}
