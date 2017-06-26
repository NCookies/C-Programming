/*
 * FileName: negative_operands.c
 * Date: 2017-06-26
 * Purpose: Test difference between c89 and c99 when calculate / or %
 *          with negative operands
 * Author: NCookie
 */

#include <stdio.h>

int main(void)
{
    printf("%d / %d = %d\n", -9, 7, -9 / 7);
    printf("%d %% %d = %d\n", -9, 7, -9 % 7);

    printf("%d\n", +-3);    // calculate from right to left
    /*
     * C89
     * -9 / 7 = -1
     * -9 % 7 = -2
     */

    /*
     * C99
     * -9 / 7 = -1
     * -9 % 7 = -2
     */

    return 0;
}
