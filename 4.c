#include <stdio.h>
#include <string.h>

int main() {
    int grades[5][4];
    float avg[5];
    int above80 = 0;

    printf("Enter grades for 5 students and 4 subjects:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);
        for (int j = 0; j < 4; j++) {
            printf("  Subject %d: ", j + 1);
            scanf("%d", &grades[i][j]);
        }
    }

    printf("\n%-10s%-10s%-10s%-10s%-10s\n", "S#", "Sub1", "Sub2", "Sub3", "Sub4");
    for (int i = 0; i < 5; i++) {
        printf("%-10d", i + 1);
        for (int j = 0; j < 4; j++)
            printf("%-10d", grades[i][j]);
        printf("\n");
    }

    // Calculate average and count Math > 80
    for (int i = 0; i < 5; i++) {
        int sum = 0;
        for (int j = 0; j < 4; j++)
            sum += grades[i][j];
        avg[i] = sum / 4.0;
        if (grades[i][0] > 80)
            above80++;
    }

    printf("\nAverage per student:\n");
    for (int i = 0; i < 5; i++)
        printf("Student %d: %.2f\n", i + 1, avg[i]);

    printf("\nStudents scoring above 80 in Math: %d\n", above80);

    return 0;
}