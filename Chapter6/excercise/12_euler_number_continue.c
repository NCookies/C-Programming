/*                                                                                     
* ====================================================================================
*                                                                                     
*       Filename:  euler_number_continue.c
*                                                                                     
*    Description:  Continues adding terms until the curent term becomes 
                   less than Epsilon entered by user
*                                                                                     
*        Version:  1.0                                                                
*        Created:  2017. 07. 07. (금) 14:34:07 KST
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
    int n;
    float e, epsilon;
    float factorial = 1.00f;

    printf("Enter number n: ");
    scanf("%d", &n);

    printf("Enter epsilon: ");
    scanf("%f", &epsilon);

    for (int i = 1; i <= n; i++) {
        if (1.00f / factorial < epsilon) {
            printf("Term %d (1/%d!): %f which is lower than the threshold: %f\n", i, i, 1.00f / factorial, epsilon);
            break;
        }
        factorial *= i;
        e += 1.00f / factorial;
        printf("Term %d (1/%d!): %f, e is currently: %f\n", i, i, 1.00f / factorial, e);
    }
    printf("Euler's Number n is %.5f\n", e);

    return 0;
}