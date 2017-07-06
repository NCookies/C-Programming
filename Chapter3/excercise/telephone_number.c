/*                                                                                     
* ====================================================================================
*                                                                                     
*       Filename:  telephone_number.c
*                                                                                     
*    Description: Write a program that prompts the user to enter a telphone number
*                                                                                     
*        Version:  1.0                                                                
*        Created:  2017. 07. 05. (수) 12:17:14 KST
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
    int num1, num2, num3;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &num1, &num2, &num3);

    printf("You entered %d.%d.%d\n", num1, num2, num3);

    return 0;
}