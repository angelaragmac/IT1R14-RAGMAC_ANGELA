#include <stdio.h>

int main() {

    char name[100];
    char section[50];
    float q1, q2, q3, q4;
    float average;

    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("Enter Complete Name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter Section : ");
    fgets(section, sizeof(section), stdin);

    printf("\n");
    printf("Enter 1st Quarter Grade: ");
    scanf("%f", &q1);

    printf("Enter 2nd Quarter Grade: ");
    scanf("%f", &q2);

    printf("Enter 3rd Quarter Grade: ");
    scanf("%f", &q3);

    printf("Enter 4th Quarter Grade: ");
    scanf("%f", &q4);
    average = (q1 + q2 + q3 + q4) / 4;

    printf("\n");
    printf("Student: %s", name);
    printf("Section: %s", section);
    printf("General Average: %.2f\n", average);

    if (average >= 90) {
        printf("Remarks: Outstanding\n");
    }
    else if (average >= 85) {
        printf("Remarks: Very Satisfactory\n");
    }
    else if (average >= 80) {
        printf("Remarks: Satisfactory\n");
    }
    else if (average >= 75) {
        printf("Remarks: Fair\n");
    }
    else {
        printf("Remarks: Failed\n");
    }
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    return 0;
}