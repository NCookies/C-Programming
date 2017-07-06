/*                                                                                     
* ====================================================================================
*                                                                                     
*       Filename:  reverse.c
*                                                                                     
*    Description:  Write a program that asks the user to enter a two-digit number, then prints the number with reversed
*                                                                                     
*        Version:  1.0                                                                
*        Created:  2017. 07. 05. (수) 13:50:11 KST
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
    int number;
    int div100, div10, mod;

    printf("Enter a two-digit number: ");
    scanf("%d", &number);

    div10 = number / 10;
    mod = number % 10;

    printf("The reversal of two-digit is: %d%d\n", mod, div10);

    printf("Enter a three-digit number: ");
    scanf("%d", &number);

    div100 = number / 100;
    div10  = number / 10 % 10;
    mod    = number % 10;
    
    printf("The reversal of three-digit is: %d%d%d\n", mod, div10, div100);

    return 0;
}