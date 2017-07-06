/*                                                                                     
* ====================================================================================
*                                                                                     
*       Filename:  date.c
*                                                                                     
*    Description:  Practice using switch statement. Prints a date in legal form
*                                                                                     
*        Version:  1.0                                                                
*        Created:  2017. 07. 05. (수) 22:21:20 KST
*       Revision:  none
*       Compiler:  gcc
*                                                                                     
*         Author:  NCookie
*   Organization:  
*                                                                                     
* ====================================================================================
*/

#include <stdio.h>
#define A 11
// switch의 라벨에는 integer(char) 또는 integer로 변환되는 매크로만 가능 

int main(void)
{
    int month, day, year;

    printf("Enter date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Dated this %d", day);
    switch (day) {
        case 1:  case 11:  case 21:   case 31:
            printf("st");
            break;
        case 2:  case 12:  case 22:
            printf("nd");
            break;
        case 3:  case 13:  case 23:
            printf("rd");
            break;
        default:
            printf("th");
            break;
    }

    printf(" day of ");
    switch (month) {
        case 1:
            printf("January");  break;
        case 2:
            printf("Feburary"); break;
        case 3:
            printf("March");    break;
        case 4:
            printf("April");    break;
        case 5:
            printf("May");      break;
        case 6:
            printf("June");     break;
        case 7:
            printf("July");     break;
        case 8:
            printf("August");  break;
        case 9:
            printf("September");break;
        case 10:
            printf("October");  break;
        case 11:
            printf("November"); break;
        case 12:
            printf("December"); break;
    }

    printf(", 20%2d.\n", year);

    return 0;
}