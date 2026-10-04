#include <stdio.h>

int main() {
    int marks;

    printf("Enter your marks: ");
    scanf("%d", &marks);

    if(marks >= 0 && marks <= 100) {
        if(marks >= 50) {
            if(marks >= 90)
                printf("Grade A+");
            else if(marks >= 80)
                printf("Grade A");
            else if(marks >= 70)
                printf("Grade B");
            else if(marks >= 60)
                printf("Grade C");
            else
                printf("Grade D");
        }
        else {
            printf("Fail");
        }
    }
    else {
        printf("Invalid Marks");
    }

    return 0;
}
