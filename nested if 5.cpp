#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three sides: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a > 0 && b > 0 && c > 0) {
        if(a + b > c && a + c > b && b + c > a) {
            if(a == b && b == c)
                printf("Equilateral Triangle");
            else {
                if(a == b || b == c || a == c)
                    printf("Isosceles Triangle");
                else
                    printf("Scalene Triangle");
            }
        }
        else {
            printf("Triangle is not possible");
        }
    }
    else {
        printf("Invalid Sides");
    }

    return 0;
}
