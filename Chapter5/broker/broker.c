/*                                                                                     
* ====================================================================================
*                                                                                     
*       Filename:  broker.c
*                                                                                     
*    Description:  Display the amount commission using trade entered by user
*                                                                                     
*        Version:  1.0                                                                
*        Created:  2017. 07. 05. (수) 16:20:15 KST
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
    float stock;
    float commission;

    printf("Enter value of trade: ");
    scanf("%f", &stock);

    // .00 이나 .0 은 같다고 보면 될 듯
    // 딱히 의미가 있나? 가독성?
    // 굳이 .0 을 붙이는 이유는 혹시 모를 계산의 오차 때문이라고 함(기준 왈)
    // 확실하지는 않음
    // 출력 포맷이 %.2f 라서??
    if (stock < 2500) {
        commission = 30.00f + stock * 0.017f;
    } else if (stock < 6250.00f) {
        commission = 56.00f + stock * 0.0066f;
    } else if (stock < 20000.00f) {
        commission = 76.00f + stock * 0.0034f;
    } else if (stock < 50000.00f) {
        commission = 100.00f + stock * 0.0022f;
    } else if (stock < 500000.00f) {
        commission = 155.00f + stock * 0.0011f;
    } else {
        commission = 255.00f + stock * 0.0009f;
    }

    printf("Commission: $%.2f\n", commission);

    return 0;
}