/*                                                                                     
* ====================================================================================
*                                                                                     
*       Filename:  07_square3.c
*                                                                                     
*    Description:  Rearrange the square3.c program so that 
                   the for loop controlling statment include only i
*                                                                                     
*        Version:  1.0                                                                
*        Created:  2017. 07. 05. (수) 23:34:56 KST
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
    int i, n, odd, square;

    printf("This program pritns a table of squares\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    square = 1;
    odd = 3;
    for (i = 1; i <= n; i++) {
        printf("%10d%10d\n", i, square);
        square += odd;
        odd += 2;
    }

    return 0;
}