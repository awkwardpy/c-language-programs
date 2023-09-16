#include <stdio.h>

int main() {
    float balance = 1000.00; // Initial account balance
    int choice;
    float amount;

    printf("Welcome to the ATM!\n");

    while (1) {
        printf("\n1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Your account balance is $%.2f\n", balance);
                break;

            case 2:
                printf("Enter the amount to deposit: $");
                scanf("%f", &amount);
                if (amount > 0) {
                    balance += amount;
                    printf("Deposit of $%.2f successful. Your new balance is $%.2f\n", amount, balance);
                } else {
                    printf("Invalid amount. Please enter a positive amount for deposit.\n");
                }
                break;

            case 3:
                printf("Enter the amount to withdraw: $");
                scanf("%f", &amount);
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    printf("Withdrawal of $%.2f successful. Your new balance is $%.2f\n", amount, balance);
                } else if (amount > balance) {
                    printf("Insufficient funds. Your balance is $%.2f\n", balance);
                } else {
                    printf("Invalid amount. Please enter a positive amount for withdrawal.\n");
                }
                break;

            case 4:
                printf("Thank you for using the ATM!\n");
                return 0;

            default:
                printf("Invalid choice. Please select a valid option.\n");
        }
    }

    return 0;
}
