/*                                                                                     
* ====================================================================================
*                                                                                     
*       Filename:  telephone_number.c
*                                                                                     
*    Description:  Write a program that asks the user to enter the numbers from 1 to 16 (in any order)
*                                                                                     
*        Version:  1.0                                                                
*        Created:  2017. 07. 05. (수) 12:23:42 KST
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
    int a1, a2, a3, a4;
    int b1, b2, b3, b4;
    int c1, c2, c3, c4;
    int d1, d2, d3, d4;

    int row_sum1, row_sum2, row_sum3, row_sum4;
    int column_sum1, column_sum2, column_sum3, column_sum4;

    printf("Enter the numbers from 1 to 16 in any order: ");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", 
            &a1, &a2, &a3, &a4, &b1, &b2, &b3, &b4, 
            &c1, &c2, &c3, &c4, &d1, &d2, &d3, &d4);

    row_sum1 = a1 + a2 + a3 + a4;
    row_sum2 = b1 + b2 + b3 + b4;
    row_sum3 = c1 + c2 + c3 + c4;
    row_sum4 = d1 + d2 + d3 + d4;

    column_sum1 = a1 + b1 + c1 + d1;
    column_sum2 = a2 + b2 + c2 + d2;
    column_sum3 = a3 + b3 + c3 + d3;
    column_sum4 = a4 + b4 + c4 + d4;
    
    printf("%d\t%d\t%d\t%d\n", a1, a2, a3, a4);
    printf("%d\t%d\t%d\t%d\n", b1, b2, b3, b4);
    printf("%d\t%d\t%d\t%d\n", c1, c2, c3, c4);
    printf("%d\t%d\t%d\t%d\n", d1, d2, d3, d4);

    printf("Row sums: %d %d %d %d\n", row_sum1, row_sum2, row_sum3, row_sum4);
    printf("Column sums: %d %d %d %d\n", column_sum1, column_sum2, column_sum3, column_sum4);
    printf("Diagonal sums: %d %d\n", a1 + b2 + c3 + d4, a4 + b3 + c2 + d1);

    return 0;
}