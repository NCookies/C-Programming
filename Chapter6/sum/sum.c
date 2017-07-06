/*                                                                                     
* ====================================================================================
*                                                                                     
*       Filename:  sum.c
*                                                                                     
*    Description:  Sums a series of integers enterd by the user
*                                                                                     
*        Version:  1.0                                                                
*        Created:  2017. 07. 05. (수) 16:00:49 KST
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
    int num, sum = 0;

    printf("This program sums a serires of integers\n");
    printf("Ener integers (0 to terminate): ");

    scanf("%d", &num);
    while (num != 0) {
        sum += num;
        scanf("%d", &num);
    }

    printf("The sum is: %d\n", sum);

    return 0;
}