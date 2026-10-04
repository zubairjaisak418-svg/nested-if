#include <stdio.h>

int main() {
    int username, password, otp;

    printf("Enter username ID: ");
    scanf("%d", &username);

    if(username == 101) {
        printf("Enter password: ");
        scanf("%d", &password);

        if(password == 12345) {
            printf("Enter OTP: ");
            scanf("%d", &otp);

            if(otp == 5678)
                printf("Login Successful");
            else
                printf("Incorrect OTP");
        }
        else {
            printf("Incorrect Password");
        }
    }
    else {
        printf("User Not Found");
    }

    return 0;
}
