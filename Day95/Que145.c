#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

struct Student findTopStudent(struct Student students[], int count) {
    int top = 0;

    for (int i = 1; i < count; i++) {
        if (students[i].marks > students[top].marks) {
            top = i;
        }
    }

    return students[top];
}

int main(void) {
    int count;
    scanf("%d", &count);

    struct Student students[count];

    for (int i = 0; i < count; i++) {
        scanf("%49s %d %d",
              students[i].name,
              &students[i].roll_no,
              &students[i].marks);
    }

    struct Student topStudent = findTopStudent(students, count);

    printf("Top Student: %s | Roll: %d | Marks: %d\n",
           topStudent.name, topStudent.roll_no, topStudent.marks);

    return 0;
}