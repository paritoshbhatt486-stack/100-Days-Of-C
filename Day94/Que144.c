#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

void printStudent(struct Student student) {
    printf("Name: %s | Roll: %d | Marks: %d\n",
           student.name, student.roll_no, student.marks);
}

int main(void) {
    struct Student student;

    scanf("%49s %d %d",
          student.name,
          &student.roll_no,
          &student.marks);

    printStudent(student);

    return 0;
}