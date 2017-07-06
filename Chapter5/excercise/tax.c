/*                                                                                     
* ====================================================================================
*                                                                                     
*       Filename:  tax.c
*                                                                                     
*    Description:  Read income of single resident entered by user and display amount of tax
*                                                                                     
*        Version:  1.0                                                                
*        Created:  2017. 07. 05. (수) 09:54:14 KST
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
    float income;
    float tax;

    printf("Enter income: ");
    scanf("%f", &income);

    if (income < 750.00f && income > 0.00f) {
        tax = income * 0.01f;
    } else if (income < 2250.00f) {
        tax = 7.50f + income * 0.02f;
    } else if (income < 3750.00f) {
        tax = 37.50f + income * 0.03f;
    } else if (income < 5250.00f) {
        tax = 82.50f + income * 0.04f;
    } else if (income < 7000.00f) {
        tax = 142.50f + income * 0.05f;
    } else {
        tax = 230.00f + income * 0.06f;
    }

    printf("Amount of tax: $%.2f\n", tax);

    return 0;
}