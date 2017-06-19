/*
 * Name: tax.c
 * Date: 2017-06-19
 * Purpose: get a dollars and cents amount,
 * then displays the amount with 5% tax added
 * Author: NCookie
 */

#include <stdio.h>

#define TAX_RATE 0.05f

int main(void)
{
    float amount;
    float tax_added = 0;

    printf("Enter an amount: ");
    scanf("%f", &amount);

    tax_added = amount * (1 + TAX_RATE);

    printf("With tax added: $%.2f\n", tax_added);

    return 0;
}
