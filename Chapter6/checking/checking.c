/*                                                                                     
* ====================================================================================
*                                                                                     
*       Filename:  checking.c
*                                                                                     
*    Description:  A program that maintains a checkbook balance
*                                                                                     
*        Version:  1.0                                                                
*        Created:  2017. 07. 05. (수) 19:58:36 KST
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
    int command;
    float credit, debit, balance = 0.0f;

    printf("*** ACME checkbook-balancing program ***\n");
    printf("Commands: 0=clear, 1=credit, 2=debit, 3=balance, 4=exit\n\n");

    int i;
    for (i = 5; i > 0; i--);
    printf("%d\n", i);

    while (1) {
        printf("Enter command: ");
        scanf("%d", &command);
        // 문자를 입력하게 되면 오류가 발생함

        switch (command) {
            case 0:
                balance = 0.0f;
                break;
            case 1:
                printf("Enter amount of credit: ");
                scanf("%f", &credit);

                balance += credit;
                break;
            case 2:
                printf("Enter amount of debit: ");
                scanf("%f", &debit);

                balance -= debit;
                break;
            case 3:
                printf("Current balance: $%.2f\n", balance);
                break;
            case 4:
                printf("Exit the program\n");
                return 0;
            default:
                printf("Invalid command\n");
                break;
        }
    }

    return 0;
}