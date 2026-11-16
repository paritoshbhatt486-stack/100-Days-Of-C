#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[200];

    // Read two strings from the user
    scanf("%s", str1);
    scanf("%s", str2);

    // Check if lengths are equal
    if (strlen(str1) != strlen(str2)) {
        printf("Not rotation\n");
        return 0;
    }

    // Join str1 with itself (e.g., "abcde" becomes "abcdeabcde")
    strcpy(temp, str1);
    strcat(temp, str1);

    // Check if str2 is inside temp
    if (strstr(temp, str2) != NULL) {
        printf("Rotation\n");
    } else {
        printf("Not rotation\n");
    }

    return 0;
}
