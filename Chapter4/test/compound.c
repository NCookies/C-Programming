/*
 * FileName: compound.c
 * Date: 2017-06-26
 * Purpose: Test compound assignment in several cases
 * Author: NCookie
 */

#include <stdio.h>

int main(void)
{
    int i, j;
    int a, b;

    i = 1;
    j = 2;

    i *= j += 3;

    printf("i *= j += 3\n");
    printf("i: %d, j: %d\n", i, j);
    printf("======================\n");

    a = 3;
    b = 4;

    a += b * 2;

    printf("a += b * 2\n");
    printf("a: %d\n\n", a);


    a = 3, b = 2;

    a = a + b * 2;

    printf("a = a + b * 2\n");
    printf("a: %d\n", a);
    printf("======================\n");

    return 0;
}
