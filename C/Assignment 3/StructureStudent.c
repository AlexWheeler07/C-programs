
/*Write a C program to read the Roll Number, Name, Address, and Age Marks of 12 students in the BCT class and display the details from the function. */

#include <stdio.h>

// Define the structure to store student details
struct Student {
    int roll_number;
    char name[50];
    char address[100];
    int age;
    float marks;
};

// Function to display student details
void display_student_details(struct Student student) {
    printf("\nRoll Number: %d\n", student.roll_number);
    printf("Name: %s", student.name);  // Displaying name with newline
    printf("Address: %s", student.address);  // Displaying address with newline
    printf("Age: %d\n", student.age);
    printf("Marks: %.2f\n", student.marks);
}

int main() {
    struct Student students[12];  // Array to store details of 12 students

    // Loop to read the details of 12 students
    for (int i = 0; i < 12; i++) {
        printf("\nEnter details for student %d:\n", i + 1);

        // Input Roll Number
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_number);

        // Input Name (use fgets to handle spaces)
        getchar();  // To consume the newline character left by previous scanf
        printf("Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);

        // Input Address (use fgets to handle spaces)
        printf("Address: ");
        fgets(students[i].address, sizeof(students[i].address), stdin);

        // Input Age
        printf("Age: ");
        scanf("%d", &students[i].age);

        // Input Marks
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Display the details of all students
    printf("\nStudent Details:\n");
    for (int i = 0; i < 12; i++) {
        printf("\nDetails of Student %d:\n", i + 1);
        display_student_details(students[i]);
    }

    return 0;
}
