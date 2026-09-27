#include <stdio.h>

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);

int main() {
    int num1, num2, choice;

    printf("Multiple functions to perform Arithmetic Operations\n\n");

    do {
        printf("Enter first number: ");
        scanf("%d", &num1);
        printf("Enter second number: ");
        scanf("%d", &num2);

        printf("\nChoose Operation:\n");
        printf("[1] Addition\n");
        printf("[2] Subtraction\n");
        printf("[3] Multiplication\n");
        printf("[4] Division\n");
        printf("[5] Exit Program\n\n");
        printf("Enter choice [1-5]: ");
        scanf("%d", &choice);
        printf("\n");

        switch (choice) {
            case 1:
                printf("%d + %d = %d\n", num1, num2, add(num1, num2));
                break;
            case 2:
                printf("%d - %d = %d\n", num1, num2, subtract(num1, num2));
                break;
            case 3:
                printf("%d * %d = %d\n", num1, num2, multiply(num1, num2));
                break;
            case 4:
                if (num2 != 0) {
                    printf("%d / %d = %.2f\n", num1, num2, divide(num1, num2));
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            case 5:
                printf("Exiting program ...\n");
                break;
            default:
                printf("Invalid choice. Please enter a number from 1 to 5.\n");
        }

        printf("\n");

    } while (choice != 5);

    return 0;
}

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    return (float)a / b;
}