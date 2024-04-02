#include <stdio.h>
#include <string.h>

#define MAX_EMPLOYEES 100

// Employee structure definition
struct Employee {
    int emp_id;
    char emp_name[50];
    int emp_age;
    char emp_role[50];
    char emp_city[50];
    int emp_experience;
    char emp_company_name[50];
};

int main() {
    struct Employee employees[MAX_EMPLOYEES];
    int n;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    // Input employee details
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Employee %d:\n", i + 1);
        printf("Employee ID: ");
        scanf("%d", &employees[i].emp_id);
        printf("Name: ");
        scanf("%s", employees[i].emp_name);
        printf("Age: ");
        scanf("%d", &employees[i].emp_age);
        printf("Role: ");
        scanf("%s", employees[i].emp_role);
        printf("City: ");
        scanf("%s", employees[i].emp_city);
        printf("Experience (in years): ");
        scanf("%d", &employees[i].emp_experience);
        printf("Company Name: ");
        scanf("%s", employees[i].emp_company_name);
    }

    // Display employee details
    printf("\nEmployee Details:\n");
    for (int i = 0; i < n; i++) {
        printf("\nDetails for Employee %d:\n", i + 1);
        printf("Employee ID: %d\n", employees[i].emp_id);
        printf("Name: %s\n", employees[i].emp_name);
        printf("Age: %d\n", employees[i].emp_age);
        printf("Role: %s\n", employees[i].emp_role);
        printf("City: %s\n", employees[i].emp_city);
        printf("Experience: %d\n", employees[i].emp_experience);
        printf("Company Name: %s\n", employees[i].emp_company_name);
    }

    return 0;
}
