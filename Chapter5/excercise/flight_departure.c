/*                                                                                     
* ====================================================================================
*                                                                                     
*       Filename:  flight_departure.c
*                                                                                     
*    Description:  Displays the departure and arrival times for the flight whose departure time is closet
                   to that entered by user
*                                                                                     
*        Version:  1.0                                                                
*        Created:  2017. 07. 05. (수) 11:16:31 KST
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
    int time;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &min);

    time = hour * 60 + min;

    printf("Closet departure time is ");
    if (time < 240 || time > 1305) {    // 마지막 비행기가 떠났을 때 
        printf("8:00 a.m., arriving at 10:16 a.m.\n");
    } else if (time < 583) {
        printf("9:46 a.m., arriving at 11:52 a.m.\n");
    } else if (time < 1305) {    // ...이하 생략
        printf("9:45 p.m., arriving at 11:58 p.m.\n");
    }

    return 0;
}