#include <stdio.h>
#include <stdlib.h>

struct Employee {
    char name[50];
    int age;
    float salary;
};

int main() {
    int n, i;
    struct Employee *employees;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    employees = malloc(n * sizeof(struct Employee));
    if (!employees) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("\nEmployee %d - Name, Age, Salary: ", i + 1);
        scanf(" %[^\n]%d%f", employees[i].name, &employees[i].age, &employees[i].salary);
    }

    printf("\nEmployee Information:\n");
    for (i = 0; i < n; i++) {
        printf("Employee %d: %s, %d, %.2f\n", i + 1, employees[i].name, employees[i].age, employees[i].salary);
    }

    free(employees);
    return 0;
}