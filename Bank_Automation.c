#include<stdio.h>
#include<string.h>
struct Bank_Account {
int account_no;
char name[100];
float balance;
};
int main(){
    struct Bank_Account x;
    int choice;
    float amount;
    x.account_no=1001;
    strcpy(x.name,"Sumeyra Kahya");
    x.balance=0;
    do{
        printf("\n-Bank Automation-\n");
        printf("1.Show Account Information\n");
        printf("2.Deposit Money\n");
        printf("3.Withdraw Money\n");
        printf("4.Balance Inquiry\n");
        printf("0.Exit\n");
        printf("Your Choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("\nAccount No:%d\n",x.account_no);
            printf("Name Surname:%s\n",x.name);
            printf("Amount:%.2f TL\n",x.balance);
            break;
            case 2:
            printf("Amount to be deposited:");
            scanf("%f",&amount);
            if(amount>0){
                x.balance+= amount;
                printf("Money has been deposited.\n");
            }else{
                printf("Money couldn't be deposited.\n");
            }
        break;
        case 3:
        printf("Amount to be withdrawn:");
        scanf("%f",&amount);
        if(amount>0 && amount<=x.balance){
            x.balance-=amount;
            printf("Money was withdrawn.\n");
        }else{
            printf("Insufficient balance or invalid amount.\n");
        };
        break;
        case 4:
        printf("Available Account:%.2fTL\n",x.balance);
        break;
        case 0:
        printf("Checking out..\n");
        break;
        default:
        printf("Choice couldn't be made.\n");
         } 
           }while (choice!=0);
            return 0;
         }     
     