#include <stdio.h>
#include <string.h>

// Define the enum for traffic lights
enum TrafficLight {
    RED,
    YELLOW,
    GREEN,
    INVALID
};

int main() {
    char input[20];
    enum TrafficLight signal;

    // Read the input string
    scanf("%s", input);

    // Map the input string to the corresponding enum value
    if (strcmp(input, "RED") == 0) {
        signal = RED;
    } else if (strcmp(input, "YELLOW") == 0) {
        signal = YELLOW;
    } else if (strcmp(input, "GREEN") == 0) {
        signal = GREEN;
    } else {
        signal = INVALID;
    }

    // Print the message based on the enum value
    switch (signal) {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
        default:
            printf("Invalid input\n");
    }

    return 0;
}
