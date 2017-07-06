/*
* FileName: date.c
* Date: 2017-07-05
* Description: Write a program that accepts a date 
* from the user in the form mm/dd//yyyy and display them 
* in the form yyyyymmdd
* Author: NCookie
*/

#include <stdio.h>

int main(void)
{
    int year, month, day;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &day, &month, &year);

    printf("You entered the date %d%d%d\n", year, month, day);

    return 0;
}