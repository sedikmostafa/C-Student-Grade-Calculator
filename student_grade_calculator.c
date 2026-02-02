#include <stdio.h>

#define SUBJECTS 5

float calculateAverage(int grades[], int count);
char* getGrade(float average);

int main() {
    char name[50];
    int grades[SUBJECTS];
    float average;
    int i;

    printf("Enter student name: ");
    fgets(name, sizeof(name), stdin);

    for (i = 0; i < SUBJECTS; i++) {
        printf("Enter grade %d: ", i + 1);
        scanf("%d", &grades[i]);
    }

    average = calculateAverage(grades, SUBJECTS);

    printf("\n--- Student Report ---\n");
    printf("Name: %s", name);
    printf("Average: %.2f\n", average);
    printf("Grade: %s\n", getGrade(average));

    return 0;
}

float calculateAverage(int grades[], int count) {
    int sum = 0;
    int i;

    for (i = 0; i < count; i++) {
        sum += grades[i];
    }

    return (float) sum / count;
}

char* getGrade(float average) {
    if (average >= 85)
        return "Excellent";
    else if (average >= 75)
        return "Very Good";
    else if (average >= 65)
        return "Good";
    else if (average >= 50)
        return "Pass";
    else
        return "Fail";
}
