#include <stdio.h>
int main()
{ 
    int val,withdraw=0,deposit=0;
    int balance =500;
    int check=0;
    int  pin, wrongPin=0;
    printf("Enter bank pin: ");
    scanf("%d",&pin);
    for(int i=0;i<=2;i++)
    {
        if(pin==1546)
        {
            while(check==0)
            {
                printf("Enter 1 for Check Balance\n");
                printf("Enter 2 for Withdraw cash\n");
                printf("Enter 3 for Deposit Cash\n");
                printf("Enter 4 for End Transaction\n ");
                scanf("%d",&val);
                if(val==1)
                {
                    printf("CURRENT BALANCE IS :%d\n",balance);
                }
                else if(val==2){
                    printf("CASH THAT WILL WITHDRAW :");
                    scanf("%d\n",&withdraw);
                    balance=balance-withdraw;
                    printf("current balance %d\n",balance);
                }
                else if(val==3)
                {
                    printf("CASH THAT WILL DEPOSIT :");
                    scanf("%d\n",&deposit);
                    balance=balance+deposit;
                    printf("current balance %d\n",deposit);
                }
                else if(val==4)
                {
                    printf("Transaction ended\n");
                    check=1;
                    break;
                }
            }
        }
        else{
            printf("INCORRECT PIN\n");
            printf("Enter bank pin: ");
            scanf("%d",&pin);
        }
    }
    if(check==1)
    {
        printf("CARD BLOCKED\n");
    }
    return 0;
}