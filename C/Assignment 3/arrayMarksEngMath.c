/*Write a program that stores the marks of the subjects Mathematics and English of n number of students in an array and then prints their total marks.*/

#include <stdio.h>

int main() {
    int n;

    // Get the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Declare a 2D array to store the marks of Mathematics and English for n students
    int marks[n][2];  // 2 columns: 0 for Mathematics and 1 for English

    // Get the marks for Mathematics and English for each student
    printf("Enter the marks for Mathematics and English for %d students:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Student %d:\n", i + 1);
        printf("Mathematics: ");
        scanf("%d", &marks[i][0]);  // Store Mathematics marks
        printf("English: ");
        scanf("%d", &marks[i][1]);  // Store English marks
    }

    // Print the total marks for each student
    printf("\nTotal marks of each student are:\n");
    for (int i = 0; i < n; i++) {
        int total = marks[i][0] + marks[i][1];  // Calculate the total marks
        printf("Student %d: Total Marks = %d (Mathematics: %d, English: %d)\n", i + 1, total, marks[i][0], marks[i][1]);
    }

    return 0;
}
