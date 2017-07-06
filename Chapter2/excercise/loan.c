/*
 * Name: loan.c
 * Date: 2017-06-19
 * Purpose: Calculates the remaining balance on a loan
 * Author: NCookie
 */


#include <stdio.h>

int main(void)
{
    float loan;
    float interest_rate;
    float monthly_interest;
    float monthly_payment;

    float balance = 0;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);

    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);

    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    monthly_interest = interest_rate * 0.01f / 12.0f;

    balance = loan;

    balance += monthly_interest * balance - monthly_payment;
    printf("Balance remaining after first payment: %.2f\n", balance);

    balance += monthly_interest * balance - monthly_payment;
    printf("Balance remaining after second payment: %.2f\n", balance);

    balance += monthly_interest * balance - monthly_payment;
    printf("Balance remaining after third payment: %.2f\n", balance);
}
