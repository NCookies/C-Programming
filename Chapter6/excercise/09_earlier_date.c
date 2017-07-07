/*                                                                                     
* ====================================================================================
*                                                                                     
*       Filename:  earlier_date.c
*                                                                                     
*    Description:  Generalize the Programming Project 9 in Chapter 5 
                   so that the user may enter any number of dates
*                                                                                     
*        Version:  1.0                                                                
*        Created:  2017. 07. 07. (금) 13:57:15 KST
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
    int month, day, year;
    int min_month = 0, min_day = 0, min_year = 0;
    int first = 1;

    while (1) {
        printf("Entr a date (mm/dd/yy): ");
        scanf("%d/%d/%d", &month, &day, &year);

        if (first) {
            first = 0;
            min_year = year;
            min_day = day;
            min_month = month;
            
            continue;
        }

        if (month == 0 && day == 0 && year == 0) {
            printf("%d/%d/%.2d is the earliest date\n", min_month, min_day, min_year);
            break;
        }

        if (min_year > year) {  // 입력한 날짜가 min일 때 
            min_year = year;
            min_day = day;
            min_month = month;
        } else if (min_year == year) {
            if (min_month > month) {
                min_year = year;
                min_day = day;
                min_month = month;
            } else if (min_month == month) {
                if (min_day > day) {
                    min_year = year;
                    min_day = day;
                    min_month = month;
                }
            }
        }
    }
    
    return 0;
}