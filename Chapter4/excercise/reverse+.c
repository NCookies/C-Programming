/*                                                                                     
* ====================================================================================
*                                                                                     
*       Filename:  reverse.c
*                                                                                     
*    Description:  Rewrite a Project2 without spliting number using arithmetic to split
*                                                                                     
*        Version:  1.0                                                                
*        Created:  2017. 07. 05. (수) 13:59:19 KST
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

    printf("Enter a three-digit number: ");
    scanf("%1d%1d%1d", &num1, &num2, &num3);

    printf("The reversal is: %d%d%d\n", num3, num2, num1);

    return 0;
}