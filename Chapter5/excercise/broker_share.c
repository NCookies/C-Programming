/*                                                                                     
* ====================================================================================
*                                                                                     
*       Filename:  broker_share.c
*                                                                                     
*    Description:  
*                                                                                     
*        Version:  1.0                                                                
*        Created:  2017. 07. 05. (수) 09:12:42 KST
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
    float share, price;
    float stock;
    float commission, rival_commission;

    // price per share은 아마 달러-유로 환율인 듯
    printf("Enter number of shares and price per share: ");
    scanf("%f", &share, &price);

    stock = share;

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

    if (stock < 2000.00f && stock > 2000.00f) {
        rival_commission = 33.00f + 3 * share;
    } else {
        rival_commission = 33.00f + 2 * share * price;
    }

    printf("Commission: $%.2f\n", commission);
    printf("Commission of Rival: $%.2f\n", rival_commission);

    return 0;
}