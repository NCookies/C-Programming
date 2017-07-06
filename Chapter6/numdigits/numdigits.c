/*                                                                                     
* ====================================================================================
*                                                                                     
*       Filename:  numdigits.c
*                                                                                     
*    Description:  Calculates the number of digits in an integer
*                                                                                     
*        Version:  1.0                                                                
*        Created:  2017. 07. 05. (수) 16:12:18 KST
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
    int num;
    int digits = 0;

    printf("Enter a nonnegative integer: ");
    scanf("%d", &num);

    do {
        digits++;
        num /= 10;
    } while (num > 0);

    printf("The number has %d digit(s)\n", digits);

    return 0;
}