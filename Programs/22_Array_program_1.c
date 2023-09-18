// WAP to read marks of 5 students and display their average and sum using arrays.
#include <stdio.h>
#include <stdlib.h>

int main() {
    float students_marks[5];
    for (int i = 0; i < 5; i++) {
        printf("Enter marks of student %d: ", i+1);
        scanf("%f", &students_marks[i]);
    }
    float sum_of_marks = 0;
    for (int i = 0; i < 5; i++) {
        sum_of_marks += students_marks[i];
    }
    int number_of_students = 5;
    float average_of_marks = sum_of_marks/number_of_students;
    printf("The sum of marks is %.2f\n", sum_of_marks);
    printf("The average marks is %.2f\n", average_of_marks);

    system("pause");
    return 0;
}