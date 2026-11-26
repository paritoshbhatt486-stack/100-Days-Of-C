#include <stdio.h>

enum Color {
    RED,
    YELLOW,
    GREEN
};

int main(void) {
    const char *names[] = {"RED", "YELLOW", "GREEN"};

    for (int i = RED; i <= GREEN; i++) {
        printf("%s=%d\n", names[i], i);
    }

    return 0;
}