/*                                                                                     
* ====================================================================================
*                                                                                     
*       Filename:  09_loan.c
*                                                                                     
*    Description:  Displays the balance remaining after each of thest payments
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
    float loan;
    float interest_rate;
    float monthly_interest;
    float monthly_payment;
    
    float balance = 0;

    int payments_number;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);

    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);

    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    printf("Enter number of payments: ");
    scanf("%d", &payments_number);

    monthly_interest = interest_rate * 0.01f / 12.0f;
    balance = loan;

    for (int i = 0; i < payments_number; i++) {
        balance += monthly_interest * balance - monthly_payment;
        printf("Balance remaining after %d payment: %.2f\n", i + 1, balance);
    }

    // balance += monthly_interest * balance - monthly_payment;
    // printf("Balance remaining after second payment: %.2f\n", balance);

    // balance += monthly_interest * balance - monthly_payment;
    // printf("Balance remaining after third payment: %.2f\n", balance);

    return 0;
}
