/*Write a program to store marks for n numbers of students in an array and print their marks.*/

#include <stdio.h>

int main() {
    int n;

    // Get the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Declare an array to store marks for n students
    int marks[n];

    // Get the marks for each student
    printf("Enter the marks of %d students:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    // Print the marks of all students
    printf("\nMarks of %d students are:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Student %d: %d\n", i + 1, marks[i]);
    }

    return 0;
}
