/*                                                                                     
* ====================================================================================
*                                                                                     
*       Filename:  square3.c
*                                                                                     
*    Description:  There's no requirement same variable be related in any way
*                                                                                     
*        Version:  1.0                                                                
*        Created:  2017. 07. 05. (수) 17:30:27 KST
*       Revision:  none
*       Compiler:  gcc
*                                                                                     
*         Author:  NCookie
*   Organization:  
*                                                                                     
* ====================================================================================
*/

#include <stdio.h>

// 제곱수가 계차수열인 것을 이용함
// odd는 2씩 늘어나는 계수, square는 제곱수를 의미함
int main(void)
{
    int i, n, odd, square;

    printf("This program pritns a table of squares\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    i = 1;
    odd = 3;
    for (square = 1; i <= n; odd += 2, i++) {
        printf("%10d%10d\n", i, square);
        square += odd;
    }

    return 0;
}