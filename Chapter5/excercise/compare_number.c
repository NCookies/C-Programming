/*                                                                                     
* ====================================================================================
*                                                                                     
*       Filename:  compare_number.c
*                                                                                     
*    Description:  Finds the largest and smllest of four integers entered by user
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
    int a, b, c, d;
    int max, min;

    printf("Enter four integers: ");
    scanf("%d%d%d%d", &a, &b, &c, &d);

    max = a;
    min = a;

    if (b > max) {
        max = b;
        min = a;
    } else if (b < min) {
        min = b;
    }

    if (c > max) {
        max = c;
    } else if (c < min) {
        min = c;
    }

    if (d > max) {
        max = d;
    } else if (d < min) {
        min = d;
    }

    printf("Largest: %d\n", max);
    printf("Smallest: %d\n", min);

    return 0;
}
