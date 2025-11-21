#include <stdio.h>

struct Student {
    char name[50];
    int marks[5];
    float average;
    char grade;
};

char calculateGrade(float avg) {
    if (avg >= 90) return 'A';
    else if (avg >= 75) return 'B';
    else if (avg >= 60) return 'C';
    else if (avg >= 45) return 'D';
    else return 'F';
}

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];
    int i, j;
    float highest = 0.0;
    int topperIndex = 0;

    for(i = 0; i < n; i++) {
        printf("\nEnter name of student %d: ", i + 1);
        scanf("%s", s[i].name);

        printf("Enter marks in 5 subjects: ");
        s[i].average = 0;
        for(j = 0; j < 5; j++) {
            scanf("%d", &s[i].marks[j]);
            s[i].average += s[i].marks[j];
        }
        s[i].average /= 5;
        s[i].grade = calculateGrade(s[i].average);

        if(s[i].average > highest) {
            highest = s[i].average;
            topperIndex = i;
        }
    }

    printf("\n--- Student Report ---\n");
    for(i = 0; i < n; i++) {
        printf("Name: %s\tAverage: %.2f\tGrade: %c\n", s[i].name, s[i].average, s[i].grade);
    }

    printf("\n Topper: %s with %.2f%% (Grade: %c)\n", s[topperIndex].name, s[topperIndex].average, s[topperIndex].grade);

    return 0;
}
