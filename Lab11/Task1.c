#include <stdio.h>

int calculateChecksum(int transactionID);
int main(){

    int code;
    printf("Enter security Code");
    scanf("%d",&code);
    int sum = 0;
    sum = sum + calculateChecksum(code);

    printf("Digital root found: %d", sum);
}

int calculateChecksum(int transactionID){
    if(transactionID < 10){
        return transactionID;
    }
    int sum = 0;
    int temp = transactionID;

    sum = sum + temp % 10;
    return (transactionID % 10);
    calculateChecksum(transactionID);
    
}
