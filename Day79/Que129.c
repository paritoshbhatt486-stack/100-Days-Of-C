#include <stdio.h>

int main() {
    // 1. Open the file in read mode ("r")
    FILE *file = fopen("numbers.txt", "r");

    // 2. Check if the file exists
    if (file == NULL) {
        printf("Error: Could not open numbers.txt\n");
        return 1;
    }

    int num;
    int sum = 0;
    int count = 0;

    // 3. Read numbers one by one until the end of the file
    while (fscanf(file, "%d", &num) == 1) {
        sum = sum + num;
        count++;
    }

    // 4. Close the file
    fclose(file);

    // 5. Check if the file had any numbers
    if (count == 0) {
        printf("No numbers found in the file.\n");
        return 1;
    }

    // 6. Calculate and print the results
    float average = (float)sum / count;
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}
