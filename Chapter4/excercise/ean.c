/*                                                                                     
* ====================================================================================
*                                                                                     
*       Filename:  ean.c
*                                                                                     
*    Description:  Project6 - Rewrite the upc.c. for EAN(European Article Number)
*                                                                                     
*        Version:  1.0                                                                
*        Created:  2017. 07. 05. (수) 16:06:48 KST
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
    int s1, s2, s3, s4, s5;
    int t1, t2, t3, t4, t5;
    int first_sum, second_sum, total;

    printf("Enter the first 11 digits of a EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &s1, &s2, &s3, &s4, &s5, &t1, &t2, &t3, &t4, &t5);

    first_sum = s2 + s4 + t1 + t3 + t5;
    second_sum = s1 + s3 + s5 + t2 + t4;
    total = 3 * first_sum + second_sum;

    printf("Check digit: %d\n", 10 - (total % 10));
    // 9 - ((total - 1) % 10)

    return 0;
}