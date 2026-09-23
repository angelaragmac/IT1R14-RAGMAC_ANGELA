#include <stdio.h>

int main() {
    float dailySavings;
    float totalSavings = 0;
    float dailyAverage;
    float goal = 500.00;

    printf("=========================================\n");
    printf("           DAILY SAVINGS TRACKER\n");
    printf("=========================================\n");

    for (int day = 1; day <= 7; day++) {
        printf("Enter savings for Day %d: ", day);
        scanf("%f", &dailySavings);
        totalSavings = totalSavings + dailySavings;
    }

    dailyAverage = totalSavings / 7;

    printf("\n=========================================\n");
    printf("             SAVINGS SUMMARY\n");
    printf("=========================================\n");
    printf("Total Savings: PHP %.2f\n", totalSavings);
    printf("Daily Average: PHP %.2f\n", dailyAverage);

    if (totalSavings >= goal) {
        printf("Status: GOAL REACHED\n");
    } else {
        printf("Status: GOAL NOT REACHED\n");
        printf("You need PHP %.2f more to reach your goal.\n", goal - totalSavings);
    }

    printf("=========================================\n");

    return 0;
}