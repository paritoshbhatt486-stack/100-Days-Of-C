#include <stdio.h>

int main() {
    int day, month, year;

    // Read the date in dd/mm/yyyy format
    scanf("%d/%d/%d", &day, &month, &year);

    // Check if the month is 04 and print in dd-Apr-yyyy format
    if (month == 4) {
        printf("%02d-Apr-%d\n", day, year);
    }

    return 0;
}
