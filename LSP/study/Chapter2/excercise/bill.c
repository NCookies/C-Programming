/*
 * Name: bill.c
 * Date: 2017-06-19
 * Purpose: Shows how to pay that amount using the smalest number
 * Author: NCookie
 */

#include <stdio.h>

#define BILL_20 20
#define BILL_10 10
#define BILL_5  5
#define BILL_1  1


int main(void)
{
    int amount = 0;

    int bills_20;
    int bills_10;
    int bills_5;
    int bills_1;

    printf("Enter a dollar amount: ");
    scanf("%d", &amount);

    bills_20 = amount / BILL_20;
    amount %= BILL_20;

    bills_10 = amount / BILL_10;
    amount %= BILL_10;

    bills_5  = amount / BILL_5;
    amount %= BILL_5;

    bills_1  = amount / BILL_1;

    printf("\n");
    printf("$20 bills: %d\n", bills_20);
    printf("$10 bills: %d\n", bills_10);
    printf(" $5 bills: %d\n", bills_5);
    printf(" $1 bills: %d\n", bills_1);

    return 0;
}
