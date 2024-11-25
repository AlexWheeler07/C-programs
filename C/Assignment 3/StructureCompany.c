/*Write a C program to create a structure named company which has name, address, phone and no Of Employee as member variables. 
Read the name of the company, its address, phone and no Of Employee. Finally display these members‟ values.
*/
#include <stdio.h>

// Define the structure for Company
struct Company {
    char name[100];         // Name of the company
    char address[200];      // Address of the company
    char phone[20];         // Phone number of the company
    int no_of_employees;    // Number of employees in the company
};

int main() {
    struct Company company;  // Declare a variable of type Company

    // Read the company details from the user
    printf("Enter the name of the company: ");
    fgets(company.name, sizeof(company.name), stdin);  // Using fgets to include spaces

    printf("Enter the address of the company: ");
    fgets(company.address, sizeof(company.address), stdin);  // Using fgets to include spaces

    printf("Enter the phone number of the company: ");
    fgets(company.phone, sizeof(company.phone), stdin);  // Using fgets to include spaces

    printf("Enter the number of employees: ");
    scanf("%d", &company.no_of_employees);  // Read the number of employees

    // Display the company details
    printf("\nCompany Details:\n");
    printf("Name: %s", company.name);
    printf("Address: %s", company.address);
    printf("Phone: %s", company.phone);
    printf("Number of Employees: %d\n", company.no_of_employees);

    return 0;
}
