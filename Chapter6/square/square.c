/*                                                                                     
* ====================================================================================
*                                                                                     
*       Filename:  square.c
*                                                                                     
*    Description:  Prints a table of squares using a while statement
*                                                                                     
*        Version:  1.0                                                                
*        Created:  2017. 07. 05. (수) 16:00:49 KST
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
    int num;
    int i = 1;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &num);

    while (i <= num) {
        printf("%10d%10d\n", i, i * i);
        i++;
    }

    return 0;
}