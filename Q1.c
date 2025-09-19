#include <stdio.h>
#include <string.h>

int main() {
    int transactions_this_hour;
    float amount;
    char country[50];
    char native_country[] = "Canada";

    printf("Enter Your Transaction amount: ");
    scanf("%f", &amount);

    if (amount > 5000) {
        printf("Suspicious Alert\n");
    } else {
        printf("Enter Your Country For transaction: ");
        scanf("%s", country);
        if (strcmp(country, native_country) == 0) {
            printf("TRANSACTION Successful\n");
        } else {
            printf("Suspicious\n");
        }
    }

    printf("\nEnter the total number of transactions this hour: ");
    scanf("%d", &transactions_this_hour);

    if (transactions_this_hour >= 3) {
        printf("Security Alert\n");
    }

    return 0;
}
