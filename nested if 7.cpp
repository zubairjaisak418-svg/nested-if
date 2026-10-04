#include <stdio.h>

int main() {
    float salary, bonus, total;
    int experience;

    printf("Enter salary: ");
    scanf("%f", &salary);

    printf("Enter experience in years: ");
    scanf("%d", &experience);

    if(salary > 0 && experience >= 0) {
        if(experience >= 10) {
            bonus = salary * 0.20;
        }
        else {
            if(experience >= 5)
                bonus = salary * 0.15;
            else {
                if(experience >= 2)
                    bonus = salary * 0.10;
                else
                    bonus = salary * 0.05;
            }
        }

        total = salary + bonus;

        printf("Bonus = %.2f\n", bonus);
        printf("Total Salary = %.2f", total);
    }
    else {
        printf("Invalid Input");
    }

    return 0;
}
