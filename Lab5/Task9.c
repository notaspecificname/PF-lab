#include <stdio.h>
#include <math.h>
int main(){

    int choice;
    double num1;       //Primary number which will be used for all single number operations
    double num2;       //Complimentary number for some cases i.e: will act as exponent when calculating power
    double answer;

    printf("Enter operation to do(enter number): \n");
    printf("1. Square root\n2.Power\n3.Absolute Value\n4.Floor\n");
    scanf("%d", &choice);

    switch(choice){
        case 1:
            printf("Enter value: ");
            scanf("%lf",&num1);
            while(num1 <= 0){
                printf("Enter postive value");
                scanf("%lf",&num1);
            }
            answer = sqrt(num1);
            printf("%lf",answer);
            break;
        
        
        case 2: {
            printf("Enter base value: ");
            scanf("%lf",&num1);
            printf("Enter exponential value: ");
            scanf("%lf", &num2);
            
            answer = pow(num1,num2);
            printf("%lf", answer);
            break;
        
        case 3:
            printf("Enter Value: ");
            scanf("%lf",&num1);
            answer = fabs(num1);
            printf("%lf",answer);
            break;

        case 4:
            printf("Enter Value: ");
            scanf("%lf",&num1);
            answer = floor(num1);
            printf("%lf",answer);
            break;
        
        default:
            printf("Invalid value entered");
            break;
        }

    }
        
        
    return 0;

            
}
