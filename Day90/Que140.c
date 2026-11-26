#include <stdio.h>
#include <string.h>

enum Gender {
    MALE,
    FEMALE
};

struct Person {
    enum Gender gender;
};

int main(void) {
    char input[30];
    struct Person person;

    scanf("%29s", input);

    if (strcmp(input, "Gender=MALE") == 0) {
        person.gender = MALE;
    } else {
        person.gender = FEMALE;
    }

    if (person.gender == MALE) {
        printf("Male\n");
    } else {
        printf("Female\n");
    }

    return 0;
}