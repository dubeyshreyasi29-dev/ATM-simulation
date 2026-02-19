#include<stdio.h>
int main(){
    int pin =1234;
    int enteredpin;
    int choice;
    float balance=10000;
    float amount;
    printf("====welcome to ATM=====\n");
    printf("enter your pin:");
    scanf("%d",&enteredpin);
    if (enteredpin == pin)  {
        do {
            printf("\n----ATM menu-----\n");
            printf("1.check balance\n");
            printf("2.Deposite money\n");
            printf("3.withdraw money\n");
            printf("4.exit\n");
            printf("enter your choice\n");
            scanf("%d",&choice);
            switch(choice){
             case 1:
             printf("your current balance is:%.2f\n",balance);
             break;
             case 2 :
             printf("enter amount to deposite :");
             scanf("%f",&amount);
             balance +=amount ;
             printf("deposite successful!\n");
             break;
             case 3:
             printf("enter amount to withdraw :");
             scanf("%f",&amount);
             if(amount<=balance){
                balance -=amount;
                printf("collect your cash.\n");
             } else{
                printf("insufficient balance!\n");
             }
             break;
             case 4:
             printf("thank you for using ATM.\n");
             break;
             default :
             printf("invalid choice\n");
            }
        } while(choice!=4);   

    }else {
        printf("incoorect pin\n");
    }
    return 0;
}