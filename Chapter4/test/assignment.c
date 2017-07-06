/*
 * FileName: assignment.c
 * Date: 2017-06-26
 * Purpose: Test assignment operator in serveral cases.
 * Author: NCookie
 */

#include <stdio.h>

int main(void)
{
    int i1;
    float f1;

    i1 = 72.99f;     // i == 72
    f1 = 33;         // f == 33.0

    printf("Result of 'i1 = 77.99f': %d\n", i1);
    printf("Result of 'f1 = 33': %.1f\n", f1);


    int a, b, c;
    a = b = c = 0;  // a == 0, b == 0, c == 0

    printf("Result of 'a = b = c': %d\n", a);


    int i2;
    float f2;

    f2 = i2 = 33.2f;    // i2 == 33, f2 == 33.0

    printf("Result of 'f2 = i2 = 33.2f': %.1f\n", f2);


    int i, j, k;

    i = 1;
    k = 1 + (j = 1);

    printf("Result of 'k = 1 + (j = 1)': %d %d %d\n", i, j, k);      // 1 1 2


    return 0;
}
