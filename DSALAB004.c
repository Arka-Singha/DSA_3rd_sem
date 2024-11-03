#include <stdio.h>

void cal(double *a, double *b) {
    printf("Enter a: ");
    scanf("%lf", a);
    printf("Enter b: ");
    scanf("%lf", b);

    char calculation;
    printf("Enter a calculator (+, -, *, /): ");
    scanf(" %c", &calculation);

    switch (calculation) {  //MENU DRIVEN PROGRAM
        case '+':
            printf("%lf + %lf = %lf", *a, *b, *a + *b);
            break;

        case '-':
            printf("%lf - %lf = %lf", *a, *b, *a - *b);
            break;

        case '*':
            printf("%lf * %lf = %lf", *a, *b, *a * *b);
            break;

        case '/':
            if (*b != 0) {
                printf("%lf / %lf = %lf", *a, *b, *a / *b);
            } else {
                printf("Infinity");
            }
            break;

        default:
            printf("Error: Invalid operator entered.");
    }
}

int main() {
    double a, b;
    cal(&a, &b);
    return 0;
}