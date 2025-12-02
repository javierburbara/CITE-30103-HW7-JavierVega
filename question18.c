#include <stdio.h>

struct Student {
    char name[40];
    int roll;
    float marks;
};

int main() {
    struct Student s[5];
    int i, maxIndex = 0;
    for (i = 0; i < 5; i++) {
        printf("Enter name: ");
        scanf(" %39[^\n]", s[i].name);
        printf("Enter roll: ");
        scanf("%d", &s[i].roll);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }
    for (i = 1; i < 5; i++)
        if (s[i].marks > s[maxIndex].marks) maxIndex = i;
    printf("\nTop Student:\n");
    printf("Name: %s\nRoll: %d\nMarks: %.2f\n",
           s[maxIndex].name, s[maxIndex].roll, s[maxIndex].marks);
    return 0;
}

