/*                                                                                     
* ====================================================================================
*                                                                                     
*       Filename:  euler_number.c
*                                                                                     
*    Description:  Approximates e by computing the value 1 + 1/1! + 1/2! + ... + 1/n! 
                   where n is an inter entered by the user
*                                                                                     
*        Version:  1.0                                                                
*        Created:  2017. 07. 07. (금) 14:21:30 KST
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
    int n;
    float e;
    float factorial = 1.00f;

    printf("Enter number n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        factorial *= i;
        e += 1.00f / factorial;
    }
    printf("Euler's Number n is %.5f\n", e);

    return 0;
}