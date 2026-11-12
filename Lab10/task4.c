#include <stdio.h>
int main(void) 
{
    char Customer_Name[50];
    int Account_Number;
    float Withdrawal_Amount;
    printf("input customer name: ");
    scanf("%49[^\n]",Customer_Name);
    printf("input account number: ");
    scanf("%d",&Account_Number);
    printf("input withdrawl amount: ");
    scanf("%f",&Withdrawal_Amount);
    FILE *fptr;
    fptr = fopen("bank_log.txt", "a");//in the same file as the question
    if (fptr == NULL)
    {
        printf("Error");
        return 1;
    }
    fprintf(fptr,"%s\n%d\n%.2f",Customer_Name,Account_Number,Withdrawal_Amount);
    fclose(fptr);
    printf("info succesfully added and file closed");
}
