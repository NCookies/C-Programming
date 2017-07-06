/*                                                                                     
* ====================================================================================
*                                                                                     
*       Filename:  square2.c
*                                                                                     
*    Description:  Converts while loop of square.c into for loop
*                                                                                     
*        Version:  1.0                                                                
*        Created:  2017. 07. 05. (수) 17:27:40 KST
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

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        printf("%10d%10d\n", i, i * i);
    }

    return 0;
}