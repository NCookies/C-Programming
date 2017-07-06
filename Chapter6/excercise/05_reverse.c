/*                                                                                     
* ====================================================================================
*                                                                                     
*       Filename:  05_reverse.c
*                                                                                     
*    Description:  Generalize the program so that the number can have one, two, three, or more digits
*                                                                                     
*        Version:  1.0                                                                
*        Created:  2017. 07. 05. (수) 23:13:47 KST
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
    int num;

    printf("Enter a num: ");
    scanf("%d", &num);

    printf("The reversal of two-digit is: ");
    do {
        printf("%d", num % 10);
        num /= 10;
    } while (num > 0);
    printf("\n");
}