#include <stdio.h>


void withdraw(int *bank);
void deposit(int *bank);

int main(){
    int option = 0;     //Stores number which defines to withdraw or deposit
    int bank = 10000;
    

    printf("Select:\n1 for withdraw\n2 to deposit\n\nEnter: ");
    scanf("%d",&option);    //Enters option

    while((option !=1) && (option != 2)){   //Loops until 1 or 2 is enterec
        printf("Choose valid option: ");
        scanf("%d",&option);
    }

    switch(option){
        case 1:
            withdraw(&bank);
            break;
        
        case 2:
            deposit(&bank);
            break;
    }

    printf("\n\nCurrent Balance: ");
    printf("%d",bank);

    return 0;

}

void withdraw(int *bank){
    int withdrawMoney = 0;

    printf("Enter money to withdraw: ");
    scanf("%d",&withdrawMoney);

    if(withdrawMoney > *bank){
        printf("Transaction denied. Insufficient balance");
    }
    else{
        printf("Success!\n");
        *bank = *bank - withdrawMoney;
    }
    
}

void deposit(int *bank){
    int depositMoney = 0;

    printf("Enter money to deposit: ");
    scanf("%d",&depositMoney);

    *bank = *bank + depositMoney;
}