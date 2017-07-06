/*                                                                                     
* ====================================================================================
*                                                                                     
*       Filename:  03_lowest_fraction.c
*                                                                                     
*    Description:  Reduces the fraction user entered to lowest 
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
    int num, denom;
    int n, m;
    int remain;

    printf("Enter a fraction: ");
    scanf("%d/%d", &num, &denom);

    n = num;
    m = denom;

    while (n != 0) {
        remain = m % n;
        m = n;
        n = remain;
    }

    printf("In owest terms: %d/%d\n", num / m, denom / m);
}