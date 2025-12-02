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

    int maxIndex = 0;
    for (int i = 1; i < 5; i++) {
        if (students[i].marks > students[maxIndex].marks) {
            maxIndex = i;
        }
    }

    printf("\nStudent with highest marks:\n");
    printf("Name  : %s\n", students[maxIndex].name);
    printf("Roll  : %d\n", students[maxIndex].roll);
    printf("Marks : %.2f\n", students[maxIndex].marks);

    return 0;
}
