#include <stdio.h>

int main() {
    int pin, choice;
    float balance = 50000, amount;

    printf("Enter PIN: ");
    scanf("%d", &pin);

    if(pin == 1234) {
        printf("\n1. Check Balance");
        printf("\n2. Deposit");
        printf("\n3. Withdraw");
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        if(choice >= 1 && choice <= 3) {
            if(choice == 1) {
                printf("Balance = %.2f", balance);
            }
            else {
                printf("Enter amount: ");
                scanf("%f", &amount);

                if(amount > 0) {
                    if(choice == 2) {
                        balance += amount;
                        printf("New Balance = %.2f", balance);
                    }
                    else {
                        if(amount <= balance) {
                            balance -= amount;
                            printf("New Balance = %.2f", balance);
                        }
                        else {
                            printf("Insufficient Balance");
                        }
                    }
                }
                else {
                    printf("Invalid Amount");
                }
            }
        }
        else {
            printf("Invalid Choice");
        }
    }
    else {
        printf("Incorrect PIN");
    }

    return 0;
}
