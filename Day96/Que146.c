#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    struct Date joining_date;
};

int main(void) {
    struct Employee employee;

    scanf("%49s %d %d %d %d",
          employee.name,
          &employee.id,
          &employee.joining_date.day,
          &employee.joining_date.month,
          &employee.joining_date.year);

    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%04d\n",
           employee.name,
           employee.id,
           employee.joining_date.day,
           employee.joining_date.month,
           employee.joining_date.year);

    return 0;
}