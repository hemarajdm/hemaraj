#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student students[3];
    float totalMarks = 0, average;

    // Input student details
    for(int i = 0; i < 3; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll number: ");
        scanf("%d", &students[i].roll);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
        totalMarks += students[i].marks;
    }

    average = totalMarks / 3;

    printf("\nAverage Marks of 3 Students = %.2f\n", average);

    return 0;
}
