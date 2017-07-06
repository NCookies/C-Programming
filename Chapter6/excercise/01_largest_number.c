/*                                                                                     
* ====================================================================================
*                                                                                     
*       Filename:  01_largest_number.c
*                                                                                     
*    Description:  Display largest number among user entered
*                                                                                     
*        Version:  1.0                                                                
*        Created:  2017. 07. 05. (수) 22:27:15 KST
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
    float num, max = 0;

    for ( ; num != 0; ) {
        printf("Enter a number: ");
        scanf("%f", &num);

        if (num > max) {
            max = num;
        }
    }

    printf("The largest number entered was %.2f\n", max);

    return 0;
}