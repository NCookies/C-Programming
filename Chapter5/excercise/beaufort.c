/*                                                                                     
* ====================================================================================
*                                                                                     
*       Filename:  beaufort.c
*                                                                                     
*    Description:  Read wind speed entered by user and display corresponding description
*                                                                                     
*        Version:  1.0                                                                
*        Created:  2017. 07. 05. (수) 09:49:44 KST
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
    int speed;

    printf("Enter a wind spped(in knots): ");
    scanf("%d", &speed);

    printf("Corresponding description of wind speed is ");
    if (speed < 1) {
        printf("Calm\n");
    } else if (speed < 3) {
        printf("Light air\n");
    } else if (speed < 27) {
        printf("Breeze\n");
    } else if (speed < 47) {
        printf("Gale\n");
    } else if (speed < 63) {
        printf("Storm\n");
    } else {
        printf("Hurricane\n");
    }

    return 0;
}