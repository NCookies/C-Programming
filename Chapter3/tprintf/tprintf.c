/*
 * Name: tprintf.c
 * Date: 2017-06-20
 * Purpose: Print integers and floating-point numbers in variuos format
 * Author: NCookie
 */

#include <stdio.h>

int main(void)
{
    int i;
    float x;

    i = 40;
    x = 839.21f;

    printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
    printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);

    return 0;
}
