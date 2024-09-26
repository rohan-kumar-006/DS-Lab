#include <stdio.h>

struct customer {
    char name[50];
    int account_number;
    float balance;
    char city[30];
};

void low_balance(struct customer c[], int n) {
    printf("Customers with balance less than $200:\n");
    for (int i = 0; i < n; i++) {
        if (c[i].balance < 200) {
            printf("Name: %s\n", c[i].name);
        }
    }
}

void increment_balance(struct customer c[], int n) {
    printf("Customers with more than $1000:\n");
    for (int i = 0; i < n; i++) {
        if (c[i].balance > 1000) {
            c[i].balance += 100;  // Add $100 to balance
            printf("Name: %s, New Balance: %f\n", c[i].name, c[i].balance);
        }
    }
}

int main() {
    int n = 11;  
    struct customer c[n];
    
    for (int i = 0; i < n; i++) {
        printf("Enter details for customer %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", c[i].name);
        printf("Account Number: ");
        scanf("%d", &c[i].account_number);
        printf("Balance: ");
        scanf("%f", &c[i].balance);
        printf("City: ");
        scanf("%s", c[i].city);
        printf("\n");
    }


    low_balance(c, n);

    increment_balance(c, n);

    return 0;
}
