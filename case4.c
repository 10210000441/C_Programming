//ATM

#include <stdio.h>
int main()
{
    int ch;
    float bal;
    int deposit;
    int withdraw;

    while(1){
   printf("===ATM Menu===\n1. Check Balance\n2. Deposit Money\n3. Withdraw Money\n4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &ch);

   switch(ch){
    case 1:
    printf("Your balance is: %.2f\n", bal);
    break;

    case 2:
    printf("Enter the amount to deposit: ");
    scanf("%d", &deposit);
    bal = bal + deposit;
    printf("Amount deposited successfully.\n");
    printf("New balance: %.2f\n", bal);
    break;

    case 3:
    printf("Enter the amount to withdraw: ");
    scanf("%d", &withdraw);
    if(withdraw > bal){
        printf("Insufficient balance.\n");
    } else {
        bal = bal - withdraw;
        printf("Amount withdrawn successfully.\n");
        printf("New balance: %.2f\n", bal);
    }
    break;

    case 4:
    printf("Exiting the program. Thank you for using the ATM.\n");
    return 0;

    default:
    printf("Invalid choice. Please try again.\n");
   }
    }
    return 0;
}