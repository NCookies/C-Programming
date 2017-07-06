/*                                                                                     
* ====================================================================================
*                                                                                     
*       Filename:  06_square.c
*                                                                                     
*    Description:  Prompts the user to enter a number n, then prints all even quares between 1 and n
*                                                                                     
*        Version:  1.0                                                                
*        Created:  2017. 07. 05. (수) 23:24:28 KST
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
    int exp = 2;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("Invalid Input\n");
        return 0;
    }

    while (exp * exp < n) {
        printf("%d\n", exp * exp);
        exp += 2;
    }

    return 0;
}