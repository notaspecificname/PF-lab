#include <stdio.h>

int calculateChecksum(int transactionID);
int main(){

    int code;
    printf("Enter security Code");
    scanf("%d",&code);
    
    int sum = calculateChecksum(code);

    printf("Digital root found: %d", sum);
}

int calculateChecksum(int transactionID){
    if(transactionID < 10){
        return transactionID;
    }
    int temp = transactionID;
    int individualNum = temp % 10;
    temp = temp / 10;

    return individualNum + calculateChecksum(temp);
    
}
