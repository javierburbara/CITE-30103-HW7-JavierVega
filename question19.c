#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Student {
    char name[40];
    int roll;
    float marks;
    struct Date dob;
};

int main() {
    struct Student s;
    printf("Enter name: ");
    scanf(" %39[^\n]", s.name);
    printf("Enter roll: ");
    scanf("%d", &s.roll);
    printf("Enter marks: ");
    scanf("%f", &s.marks);
    printf("Enter birth date (day month year): ");
    scanf("%d %d %d", &s.dob.day, &s.dob.month, &s.dob.year);
    printf("\nName: %s\nRoll: %d\nMarks: %.2f\nDOB: %02d-%02d-%04d\n",
           s.name, s.roll, s.marks, s.dob.day, s.dob.month, s.dob.year);
    return 0;
}

