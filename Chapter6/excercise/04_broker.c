/*                                                                                     
* ====================================================================================
*                                                                                     
*       Filename:  04_broker.c
*                                                                                     
*    Description:  Improve broker.c using loop
*                                                                                     
*        Version:  1.0                                                                
*        Created:  2017. 07. 05. (수) 23:01:38 KST
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

    while (1) {
        printf("Enter value of trade: ");
        scanf("%f", &stock);

        if (stock == 0) 
            break;

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

        printf("Commission: $%.2f\n\n", commission);
    }

    return 0;
}