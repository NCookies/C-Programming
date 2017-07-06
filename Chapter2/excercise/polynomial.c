/*
 * Name: polynomial.c
 * Date: 2017-06-19
 * Purpose: Get a value for x and then displays the value of the polynomial
 * Author: NCookie
 */

#include <stdio.h>

int main(void)
{
    float x;

    float x_square;
    float x_cube;
    float x_power_of_4;
    float x_power_of_5;

    float result = 0;

    printf("Enter a value for x: ");
    scanf("%f", &x);

    x_square     = x * x;
    x_cube       = x_square * x;
    x_power_of_4 = x_cube * x;
    x_power_of_5 = x_cube * x;

    result = 3 * x_power_of_5 + 2 * x_power_of_4
                - 5 * x_cube - 1 * x_square + 7 * x - 6;

    printf("Result: %.3f\n", result);

    return 0;
}
