#include <stdio.h>

int main() {
    int number;
    int total = 0;

    printf("Enter positive numbers to ADD (zero or negative number to STOP)\n\n");

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number > 0) {
        total = total + number;
        printf("Enter a number: ");
        scanf("%d", &number);
    }
    printf("<<<<<<<<<<<<<<<<<<\n");
    printf("Total sum is: %d\n", total);
    printf("<<<<<<<<<<<<<<<<<<\n");
    return 0; 
} 