#include <stdio.h>

void analyzeNumber(int num);

int main() {
    int number;

    printf("=================================\n");
    printf("       NUMBER ANALYZER\n");
    printf("=================================\n");

    for (int i = 1; i <= 5; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &number);

        analyzeNumber(number);
    }

    printf("Program finished.\n");

    return 0;
}

void analyzeNumber(int num) {

    if (num > 0) {
        printf("The number is POSITIVE.\n");
    } else if (num < 0) {
        printf("The number is NEGATIVE.\n");
    } else {
        printf("The number is ZERO.\n");
    }


    if (num % 2 == 0) {
        printf("The number is EVEN.\n");
    } else {
        printf("The number is ODD.\n");
    }
}