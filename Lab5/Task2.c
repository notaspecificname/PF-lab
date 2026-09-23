#include <stdio.h>
int main(){     //Start main function

    int age;
    int income; //Monthly income
    int credit_score;
    int existing_loan;
    char ne[] = "Rejected: Does not meet any of the above criteria";      //Constant value

    printf("Input Age: ");
    scanf("%d", &age);
    
    if(age >= 21){
        
        printf("Input Income: ");   //Input income
        scanf("%d", &income);
        printf("Input Credit Score: ");     //Input Credit Score
        scanf("%d", &credit_score);
        printf("Do you have an existing loan? (Enter 1- True or 0- False): ");  //Inputs whether user has a loan or not
        scanf("%d", &existing_loan);

        if(income>=100000 && credit_score >= 750 && existing_loan == 0)     //Checks conditions, then prints varying chances of approval
            printf("High Approval Chance");
        else if(income>=75000 && credit_score >= 650 && existing_loan == 1)
            printf("Manual Review");
        else if(income>=50000 && credit_score >= 600)
            printf("Possibly Eligible");
        else
            printf(ne);


    }
    else{
        printf(ne);
    }

    return 0;


}
