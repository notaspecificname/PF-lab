#include <stdio.h>
int main(){

    int reading;
    int even=0;
    int odd=0;
    int temp;
    int digit;

    printf("Enter reading: ");
    scanf("%d",&reading);

    temp = reading;

    while(temp>0){
        digit = temp % 10;
        if(digit %2 ==0)
            even++;
        else
            odd++;
        temp = temp/10;
    }

    printf("Even: %d\n",even);
    printf("Odd: %d",odd);

    return 0;
}
