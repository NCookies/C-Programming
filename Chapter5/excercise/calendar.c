/*                                                                                     
* ====================================================================================
*                                                                                     
*       Filename:  calendar.c
*                                                                                     
*    Description:  Prompts the user to enter two dates and then indicates which
                   date comes earlier on the calendar
*                                                                                     
*        Version:  1.0                                                                
*        Created:  2017. 07. 05. (수) 11:44:12 KST
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
    int month1, day1, year1;
    int month2, day2, year2;

    printf("Entr first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month1, &day1, &year1);

    printf("Entr second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month2, &day2, &year2);

    if (year1 == year2) {
        if (month1 == month2) {
            if (day1 == day2) {
                printf("%d/%d/%.2d and %d/%d/%.2d are same\n", month1, day1, year1, month2, day2, year2);
            } else if (day1 > day2) {
                printf("date2 is earlier than date1\n");
            } else {
                printf("date1 is earlier than date2\n");    
            }
        } else if (month1 > month2) {
            printf("date2 is earlier than date1\n");
        } else {
            printf("date1 is earlier than date2\n");
        }
    } else if (year1 > year2) {
        printf("date2 is earlier than date1\n");
    } else {
        printf("date1 is earlier than date2\n");
    }
    // 중복을 없앨 수 있는 방법은 없을까?
    // if문만을 사용해서

    return 0;
}