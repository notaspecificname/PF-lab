#include <stdio.h>
int main(){

    float num1;
    float num2;
    float num3;

    printf("Enter num 1: ");
    scanf("%f", &num1);
    printf("Enter num 2: ");
    scanf("%f", &num2);
    printf("Enter num 3: ");
    scanf("%f", &num3);
    
    
    if(num1 == num2 && num2 == num3)
    {
        printf("All numbers entered are same");
        
    }
    else if(num1 == num2 && num2 > num3)
    {
        printf("Number 1 and 2: %f entered are same and largest", num2);
    }
    else if(num1 == num3 && num1 > num2)
    {
        printf("Number 1 and 3: %f entered are same and largest", num1);
    }
    else if(num2 == num3 && num2 > num1)
    {
        printf("Number 2 and 3: %f entered are same and largest", num2);
    }
    else if (num2 > num3)
    {
        printf("%f was the largest num input",num2);
    }
    else if (num3 > num2)
    {
        printf("%f was the largest number entered", num3);
    }
    else if(num1 > num2){
        printf("%f was the largest number input", num1);
    }
    
    


}
