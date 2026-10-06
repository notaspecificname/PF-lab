#include <stdio.h>
int main(){
     
    int code;
    int reversed =0;
    int temp;
    int digit=0;


    printf("Enter book code: ");
    scanf("%d",&code);

    temp = code;
    while(temp >0){
        digit = temp % 10;
        reversed = reversed*10 + digit;
        temp = temp/10;

    }

    if(reversed == code){
        printf("Book code is valid");
    }
    else
        printf("Book code invalid");

}