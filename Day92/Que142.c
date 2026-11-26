#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main(void) {
    struct Student students[5];

    for (int i = 0; i < 5; i++) {
        scanf("%49s %d %d",
              students[i].name,
              &students[i].roll_no,
              &students[i].marks);
    }

    printf("Name\tRoll\tMarks\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\t%d\t%d\n",
               students[i].name,
               students[i].roll_no,
               students[i].marks);
    }

    return 0;
}