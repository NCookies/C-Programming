/*                                                                                     
* ====================================================================================
*                                                                                     
*       Filename:  02_gcd.c
*                                                                                     
*    Description:  Calculates and displays their greatest common divisor (GCD) 
                   using two integers user entered
*                                                                                     
*        Version:  1.0                                                                
*        Created:  2017. 07. 05. (수) 22:27:15 KST
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
    int n, m;
    int remain;

    printf("Enter two integers: ");
    scanf("%d%d", &n, &m);

    // 동작은 하나 가독성이 별로인 듯
    // for ( ; n != 0; m = n, n = remain) {
    //     remain = m % n;
    // }

    while (n != 0) {
        remain = m % n;
        m = n;
        n = remain;
    }

    printf("Greatest common divisor: %d\n", m);

    return 0;
}