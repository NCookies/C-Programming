/*
 * FileName: subexpression.c
 * Date: 2017-06-26
 * Purpose: Test order in which subexpressions are evaluated
 * Author: NCookie
 */

#include <stdio.h>

int main(void)
{
    int a = 5;
    int b, c;

    c = (b = a + 2) - (a = 1);
    // 6 or 2
    // operation on ‘a’ may be undefined

    printf("%d\n", c);


    int i = 2;
    int j = i * i++;
    // 4 or 6
    // operation on ‘i’ may be undefined

    printf("%d\n", j);

    return 0;
}
