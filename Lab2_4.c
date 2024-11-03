#include <stdio.h>
#include <stdlib.h>

struct Emp {
    char name[50];
    char gender[20];
    char designation[50];
    char department[50];
    float basicPay;
};

// Function to calculate the gross pay
float calculateGrossPay(struct Emp emp) {
    float bp = emp.basicPay;
    return bp + bp * 0.25 + bp * 0.75;
}

int main() {
    int n, i;
    printf("Name - ARKA SINGHA , ROLL NO.- 2230068 , ECSc - 2\n\n");
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct Emp *employees = (struct Emp *)malloc(n * sizeof(struct Emp));

    for (i = 0; i < n; i++) {
        printf("Enter details for Employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Gender (M/F): ");
        scanf("%s", employees[i].gender);
        printf("Designation: ");
        scanf("%s", employees[i].designation);
        printf("Department: ");
        scanf("%s", employees[i].department);
        printf("Basic Pay: ");
        scanf("%f", &employees[i].basicPay);
    }

    for (int i = 0; i < n; i++) {
        float gp = calculateGrossPay(employees[i]);
        printf("\nEmployee %d:\n", i + 1);
        printf("Name: %s\n", employees[i].name);
        printf("Gender: %s\n", employees[i].gender);
        printf("Designation: %s\n", employees[i].designation);
        printf("Department: %s\n", employees[i].department);
        printf("Basic Pay: %.2f\n", employees[i].basicPay);
        printf("Gross Pay: %.2f\n", gp);
    }

    free(employees);
    return 0;
}
