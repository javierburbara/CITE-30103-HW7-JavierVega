#include <stdio.h>

struct Student {
    char name[40];
    int roll;
    float marks;
};

void printStudent(struct Student s);

int main() {
    struct Student s;
    printf("Enter name: ");
    scanf(" %39[^\n]", s.name);
    printf("Enter roll: ");
    scanf("%d", &s.roll);
    printf("Enter marks: ");
    scanf("%f", &s.marks);
    printStudent(s);
    return 0;
}

void printStudent(struct Student s) {
    printf("\nName: %s\nRoll: %d\nMarks: %.2f\n", s.name, s.roll, s.marks);
}

