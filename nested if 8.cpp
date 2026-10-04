#include <stdio.h>

int main() {
    float amount, discount, finalBill;
    int membership;

    printf("Enter shopping amount: ");
    scanf("%f", &amount);

    printf("1. Member\n2. Non-Member\n");
    printf("Enter membership: ");
    scanf("%d", &membership);

    if(amount > 0) {
        if(membership == 1) {
            if(amount >= 10000)
                discount = amount * 0.25;
            else if(amount >= 5000)
                discount = amount * 0.15;
            else
                discount = amount * 0.05;
        }
        else if(membership == 2) {
            if(amount >= 10000)
                discount = amount * 0.10;
            else
                discount = 0;
        }
        else {
            printf("Invalid Membership");
            return 0;
        }

        finalBill = amount - discount;

        printf("Original Bill = %.2f\n", amount);
        printf("Discount = %.2f\n", discount);
        printf("Final Bill = %.2f", finalBill);
    }
    else {
        printf("Invalid Amount");
    }

    return 0;
}
