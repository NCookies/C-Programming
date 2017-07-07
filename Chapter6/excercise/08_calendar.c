/*                                                                                     
* ====================================================================================
*                                                                                     
*       Filename:  08_calendar.c
*                                                                                     
*    Description:  Prints a one-month calendar
*                                                                                     
*        Version:  1.0                                                                
*        Created:  2017. 07. 07. (금) 13:43:43 KST
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
    int days, start;

    printf("Enter number of days in month: ");
    scanf("%d", &days);

    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &start);
    start %= 7; // start에 입력된 값이 7을 넘었을 때의 처리

    for (int j = 0; j < start - 1; j++) {
        printf("   ");
    }

    for (int i = start; i < start + days; i++) {
        printf("%2d ", i - start + 1);
        if (i % 7 == 0) {
            printf("\n");
        }
    }
    printf("\n");

    return 0;
}