/*                                                                                     
* ====================================================================================
*                                                                                     
*       Filename:  if_test.c
*                                                                                     
*    Description:  Excercise 5. Check that 'if' statement is legal
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

int main(void) 
{
    int n = -9;

    if (n == 1 - 10)
        printf("n is between 1 and 10\n");

    return 0;
}