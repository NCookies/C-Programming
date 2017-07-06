/*                                                                                     
* ====================================================================================
*                                                                                     
*       Filename:  octal.c
*                                                                                     
*    Description:  Project4 - Reads an integer entered by user and displays it in octal
*                                                                                     
*        Version:  1.0                                                                
*        Created:  2017. 07. 05. (수) 14:04:45 KST
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
    int num1, num2, num3, num4, num5;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &number);

    num5 = number % 8;
    number /= 8;

    num4 = number % 8;
    number /= 8;

    num3 = number % 8;
    number /= 8;

    num2 = number % 8;
    number /= 8;

    num1 = number % 8;

    printf("%d%d%d%d%d\n", num1, num2, num3, num4, num5);

    return 0;
}