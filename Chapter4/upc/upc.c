/*
 * FileName: upc.c
 * Date: 2017-06-26
 * Purpose: Computes a Universal Product Code check digit
 * Author: NCookie
 */

#include <stdio.h>

int main(void)
{
    int single_digit;
    int s1, s2, s3, s4, s5;
    int t1, t2, t3, t4, t5;
    int first_sum, second_sum, total;

    printf("Enter the first (single) digit: ");
    scanf("%d", &single_digit);

    printf("Enter first group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &s1, &s2, &s3, &s4, &s5);
    printf("Enter second group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &t1, &t2, &t3, &t4, &t5);

    first_sum = single_digit + s2 + s4 + t1 + t3 + t5;
    second_sum = s1 + s3 + s5 + t2 + t4;
    total = 3 * first_sum + second_sum;

    printf("Check digit: %d\n", 9 - ((total - 1) % 10));

    return 0;
}
