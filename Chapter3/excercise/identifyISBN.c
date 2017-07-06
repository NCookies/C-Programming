/*
* FileName: identifyISBN.c
* Date: 2017-07-05
* Description: Write a program that breaks down an ISBN 
* entered by the user
* Author: NCookie
*/

#include <stdio.h>

int main(void)
{
    int prefix, group_identifier, publisher_code;
    int item_number, check_digit;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &prefix, &group_identifier, 
            &publisher_code, &item_number, &check_digit);
        
    printf("GS1 prefix: %d\n", prefix);
    printf("Group identifier: %d\n", group_identifier);
    printf("Publisher Code: %d\n", publisher_code);
    printf("Item number: %d\n", item_number);
    printf("Check digit: %d\n", check_digit);

    return 0;
}