#include <stdio.h>
int main(){

    int pin;
    int sum =0;
    int digit;

    printf("Enter 4 digit pin: ");
    scanf("%d",&pin);

    while(pin >0){
        digit = pin % 10;
        sum = digit + sum;
        pin = pin / 10;
    }

    if(sum > 10)
        printf("Strong pin");
    else
        printf("Weak pin");

    return 0;
}