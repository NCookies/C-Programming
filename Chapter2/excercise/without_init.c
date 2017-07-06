/*
 * Name: without_init.c
 * Date: 2017-06-19
 * Purpose: Check value and pattern if declares several int and float
 * variables without initializing
 * Author: NCookie
 */

#include <stdio.h>

int main(void)
{
    int ia, ib, ic;
    float fa, fb, fc;

    printf("ia: %d\n", ia);
    printf("ib: %d\n", ib);
    printf("ic: %d\n", ic);

    printf("fa: %.5f\n", fa);
    printf("fb: %.5f\n", fb);
    printf("fc: %.5f\n", fc);

    return 0;
}
