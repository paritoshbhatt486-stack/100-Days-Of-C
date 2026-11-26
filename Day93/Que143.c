#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main(void) {
    int n;
    scanf("%d", &n);

    struct Student students[n];

    for (int i = 0; i < n; i++) {
        scanf("%49s %d %d",
              students[i].name,
              &students[i].roll_no,
              &students[i].marks);
    }

    int topper = 0;
    for (int i = 1; i < n; i++) {
        if (students[i].marks > students[topper].marks) {
            topper = i;
        }
    }

    printf("Topper: %s (Marks: %d)\n",
           students[topper].name,
           students[topper].marks);

    return 0;
}