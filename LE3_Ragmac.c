#include <stdio.h>

int main() {

    char name[50];
    char section[50];
    double num1, num2;

    printf("Enter Complete Name: ");
    fgets(name, sizeof(name), stdin);
    printf("Enter Section: ");
    fgets(section, sizeof(section), stdin);
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);

    printf("\nStudent Calculator\n");
    printf("Student name: %s\n", name);
    printf("Section: %s\n", section);
    printf("Results:\n");
    printf("%.0f + %.0f = %.0f\n", num1, num2, num1 + num2);
    printf("%.0f - %.0f = %.0f\n", num1, num2, num1 - num2);
    printf("%.0f * %.0f = %.0f\n", num1, num2, num1 * num2);
    printf("%.0f / %.0f = %.2f\n", num1, num2, num1 / num2);

    return 0;
}
