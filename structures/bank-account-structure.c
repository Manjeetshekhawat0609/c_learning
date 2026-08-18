#include <stdio.h>

struct bank
{
    int account_number;
    char customer_name[50];
    float balance;
} BankAccount;

int main()
{
    struct bank BankAccount;
    printf("Enter account number: ");
    scanf("%d", &BankAccount.account_number);
    printf("Enter customer name: ");
    scanf("%s", BankAccount.customer_name);
    printf("Enter balance: ");
    scanf("%f", &BankAccount.balance);
    printf("\nAccount Number: %d\n", BankAccount.account_number);
    printf("Customer Name: %s\n", BankAccount.customer_name);
    printf("Balance: %.2f\n", BankAccount.balance);
    return 0;
}