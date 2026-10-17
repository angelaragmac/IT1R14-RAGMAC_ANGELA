#include <stdio.h>

int main() {
    float balance = 500.00;
    float amount = 0;
    char choice;

    do {
        printf("---------------------\n");
        printf("BANGKO NI ANGELA\n");
        printf("---------------------\n");
        printf("Please Select your Transaction\n");
        printf("[1] Balance Inquiry\n");
        printf("[2] Deposit\n");
        printf("[3] Withdraw\n");
        printf("[4] Exit\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice);

        switch (choice) {
            case '1':
                printf("\nYour current balance: P%.2f\n\n", balance);
                break;

            case '2':
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);

                if (amount > 0) {
                    balance = balance + amount;
                    printf("P%.2f deposited successfully!\n\n", amount);
                } else {
                    printf("Invalid amount!\n\n");
                }
                break;

            case '3':
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);

                if (amount <= 0) {
                    printf("Invalid amount!\n\n");
                } else if (balance - amount < 100) {
                    printf("Withdrawal denied! You must maintain at least P100.00 in your account.\n\n");
                } else {
                    balance = balance - amount;
                    printf("You withdrew P%.2f successfully!\n\n", amount);
                }
                break;

            case '4':
                printf("\nThank you for using BANGKO NI ANGELA. Goodbye!\n");
                break;

            default:
                printf("\nInvalid choice. Please enter 1, 2, 3, or 4.\n\n");
        }
    } while (choice != '4');

    return 0;
}
