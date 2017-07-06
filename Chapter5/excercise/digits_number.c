/*                                                                                     
* ====================================================================================
*                                                                                     
*       Filename:  digits_number.c
*                                                                                     
*    Description:  Calculates how many digits a number contains
*                                                                                     
*        Version:  1.0                                                                
*        Created:  2017. 07. 05. (수) 23:30:01 KST
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
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("The number %d has ", number);
    if (number > 0 && number < 10) {
        printf("1");
    } else if (number < 100) {
        printf("2");
    } else if (number < 1000) { 
        // 문제에서는 4자리 수 이상의 수는 입력되지 않기 때문에 else 로 대체해도 상관 없음
        printf("3");
    }
    printf(" digits\n");

    return 0;
}