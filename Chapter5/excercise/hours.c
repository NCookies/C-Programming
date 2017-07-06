/*                                                                                     
* ====================================================================================
*                                                                                     
*       Filename:  hours.c
*                                                                                     
*    Description:  Calculates how many digits a number contains
*                                                                                     
*        Version:  1.0                                                                
*        Created:  2017. 07. 05. (수) 23:36:03 KST
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
    int hour, min;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &min);

    printf("Equivalent 12-hour time: ");
    if (hour > 12) {
        printf("%2d:%2d PM\n", hour - 12, min);
    } else if (hour == 12) {
        printf("%2d:%2d PM\n", hour, min);
    } else {
        printf("%2d:%2d AM\n", hour, min);
    }

    return 0;
}