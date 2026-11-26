#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main(void) {
    struct Student student;

    scanf("%49s", student.name);
    scanf("%d", &student.roll_no);
    scanf("%d", &student.marks);

    printf("Name: %s | Roll: %d | Marks: %d\n",
           student.name, student.roll_no, student.marks);

    return 0;
}