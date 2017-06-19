/*
 * Name: polynomial_horner.c
 * Date: 2017-06-19
 * Purpose: Modified program perfomrs fewer multiplications using Horner's Rule
 * Author: NCookie
 */

#include <stdio.h>

int main(void)
{
    float x;

    float result = 0;

    printf("Enter a value for x: ");
    scanf("%f", &x);

    result = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

    printf("Result: %.3f\n", result);

    return 0;
}
