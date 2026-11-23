#include <stdio.h>

// Define a simple structure for a student
struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s;
    int count;
    FILE *file;

    // 1. Ask for the number of students
    printf("How many students? ");
    scanf("%d", &count);

    // 2. Open file for writing ("w")
    file = fopen("students.txt", "w");

    for (int i = 0; i < count; i++) {
        printf("Enter name, roll, and marks for student %d: ", i + 1);
        scanf("%s %d %f", s.name, &s.roll, &s.marks);

        // Save the data into the text file
        fprintf(file, "%s %d %.2f\n", s.name, s.roll, s.marks);
    }
    fclose(file); // Always close the file after writing

    // 3. Open file for reading ("r")
    printf("\n--- Saved Student Records ---\n");
    file = fopen("students.txt", "r");

    // Read each line from the file until the end (EOF)
    while (fscanf(file, "%s %d %f", s.name, &s.roll, &s.marks) != EOF) {
        printf("Name: %s | Roll: %d | Marks: %.0f\n", s.name, s.roll, s.marks);
    }
    fclose(file); // Always close the file after reading

    return 0;
}
