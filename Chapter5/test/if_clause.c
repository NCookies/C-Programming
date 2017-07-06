/*                                                                                     
* ====================================================================================
*                                                                                     
*       Filename:  if_clause.c
*                                                                                     
*    Description:  Tset if clause without braces
*                                                                                     
*        Version:  1.0                                                                
*        Created:  2017. 07. 05. (수) 16:10:11 KST
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
    int i = 2;
    int j = 5;
    int k = 4;
    int max = 0;

    // 왠만하면 중괄호로 감싸주자
    if (i > j) 
        if (i > k)
            max = i;
        else 
            max = k;
    else
        if (j > k)
            max = j;
        else
            max = k;

    printf("MAX: %d\n", max);

    return 0;
}
