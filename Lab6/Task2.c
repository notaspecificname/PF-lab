#include <stdio.h>
int main(){

    int num, temp, digit,reverse = 0;

    printf("Enter ticket number: ");
    scanf("%d", &num);

    temp = num;
    while(temp > 0){

        digit = temp %10;
        reverse = reverse *10 + digit;
        temp = temp/10;
        printf("%d",digit);
    }


}