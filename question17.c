#include <stdio.h>

struct Student {
    char name[40];
    int roll;
    float marks;
};

int main(void) {
    struct Student students[5];

    printf("Enter data for 5 students (name roll marks):\n");
    for (int i = 0; i < 5; i++) {
        printf("Student %d:\n", i + 1);
        scanf("%39s %d %f", students[i].name, &students[i].roll, &students[i].marks);
    }

    printf("\n%-15s %-10s %-10s\n", "Name", "Roll", "Marks");
    for (int i = 0; i < 5; i++) {
        printf("%-15s %-10d %-10.2f\n",
               students[i].name, students[i].roll, students[i].marks);
    }

    return 0;
}
