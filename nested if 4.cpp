#include <stdio.h>

int main() {
    int units;
    float bill, tax, total;

    printf("Enter electricity units: ");
    scanf("%d", &units);

    if(units >= 0) {
        if(units <= 100)
            bill = units * 10;
        else if(units <= 200)
            bill = 100 * 10 + (units - 100) * 15;
        else if(units <= 300)
            bill = 100 * 10 + 100 * 15
                   + (units - 200) * 20;
        else
            bill = 100 * 10 + 100 * 15
                   + 100 * 20 + (units - 300) * 25;

        if(units > 0)
            tax = bill * 0.10;
        else
            tax = 0;

        total = bill + tax;

        printf("Bill = %.2f\n", bill);
        printf("Tax = %.2f\n", tax);
        printf("Total = %.2f", total);
    }
    else {
        printf("Invalid Units");
    }

    return 0;
}
