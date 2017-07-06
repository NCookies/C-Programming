/*                                                                                     
* ====================================================================================
*                                                                                     
*       Filename:  upc_valid.c
*                                                                                     
*    Description:  Check wheter a UPC is valid
*                                                                                     
*        Version:  1.0                                                                
*        Created:  2017. 07. 05. (수) 10:04:28 KST
*       Revision:  none
*       Compiler:  gcc
*                                                                                     
*         Author:  NCookie
*   Organization:  
*                                                                                     
* ====================================================================================
*/

#include <stdio.h>

int main(void)
{
    int single_digit;
    int s1, s2, s3, s4, s5;
    int t1, t2, t3, t4, t5;
    int first_sum, second_sum, total;
    int check_digit;

    printf("Enter the first (single) digit: ");
    scanf("%d", &single_digit);

    printf("Enter first group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &s1, &s2, &s3, &s4, &s5);

    printf("Enter second group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &t1, &t2, &t3, &t4, &t5);

    printf("Enter check digit: ");
    scanf("%1d", &check_digit);

    first_sum = single_digit + s2 + s4 + t1 + t3 + t5;
    second_sum = s1 + s3 + s5 + t2 + t4;
    total = 3 * first_sum + second_sum;

    printf("UPC is ");
    if (check_digit == 10 - (total % 10)) {
        printf("VALID\n");
    } else {
        printf("NOT VALID\n");
    }

    return 0;
}