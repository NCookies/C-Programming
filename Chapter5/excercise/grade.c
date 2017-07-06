/*                                                                                     
* ====================================================================================
*                                                                                     
*       Filename:  grade.c
*                                                                                     
*    Description:  Converts a numerical grade into a letter grade using switch statement
*                                                                                     
*        Version:  1.0                                                                
*        Created:  2017. 07. 05. (수) 11:44:12 KST
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
    int grade;

    printf("Enter numerical grade: ");
    scanf("%d", &grade);

    if (grade < 0 || grade > 100) {
        printf("Illegal grade\n");
        return 0;
    }

    printf("Letter grade: ");
    switch (grade / 10) {
        case 9: case 10:
            printf("A\n");
            break;
        case 8:
            printf("B\n");
            break;
        case 7:
            printf("C\n");
            break;
        case 6:
            printf("D\n");
            break;
        default:
            printf("F\n");
            break;
    }

    return 0;
}