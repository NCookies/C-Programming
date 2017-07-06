/*
* FileName: purchase_date.c
* Date: 2017-07-05
* Description: Write a program that formats product information 
* entered by the user
* Author: NCookie
*/

#include <stdio.h>

int main(void) 
{
    int item_number;
    float unit_price;
    int year, month, day;

    printf("Enter item number: ");
    scanf("%d", &item_number);

    printf("Enter unit price: ");
    scanf("%f", &unit_price);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    // First line
    printf("Item\t");
    printf("Unit\t");
    printf("Purchase\n");

    // Second line
    printf("\t");
    printf("Price\t");
    printf("Date\n");

    // First line
    printf("%d\t", item_number);
    printf("$  %f\t", unit_price);;
    printf("%d/%d/%d\n", month, day, year);

    return 0;
}