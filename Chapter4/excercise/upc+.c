/*                                                                                     
* ====================================================================================
*                                                                                     
*       Filename:  upc+.c
*                                                                                     
*    Description:  Project5 - Rewrite the upc.c. Read upc numbers entered by user at one time
*                                                                                     
*        Version:  1.0                                                                
*        Created:  2017. 07. 05. (수) 14:11:08 KST
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
    /* 
    total을 어떻게 구할건데? HOLY...
    다른 방법을 찾아야하나?
    애초에 반복문을 사용하지 않는 이상 나머지 연산으로 구하는건 노가다인데
    그럼 굳이 프로그램을 다시 작성할 필요가 있나?
    그냥 이어 붙이기만 하면 되는데...
    문제의 출제 의도가 잘 이해가 되지 않는다.
    */

    int single_digit;
    int s1, s2, s3, s4, s5;
    int t1, t2, t3, t4, t5;
    int first_sum, second_sum, total;

    printf("Enter the first 11 digits of a UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &single_digit, &s1, &s2, &s3, &s4, &s5, &t1, &t2, &t3, &t4, &t5);

    first_sum = single_digit + s2 + s4 + t1 + t3 + t5;
    second_sum = s1 + s3 + s5 + t2 + t4;
    total = 3 * first_sum + second_sum;

    printf("Check digit: %d\n", 10 - (total % 10));
    // 9 - ((total - 1) % 10)

    return 0;
}