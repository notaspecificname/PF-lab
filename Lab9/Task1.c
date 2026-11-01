#include <stdio.h>

int main(){

    int membership = 0;
    float discount = 0;
    float cartValue = 0;

    float calculateDiscount(int membershipStatus, float cart);
    float calculateFinalBill(float bill);

    printf("Enter shopping cart value: ");
    scanf("%f", &cartValue);
    

    printf("Enter Membership status number \n1. Platinum\n2. Gold\n3. Standard\n\nEnter option: ");
    scanf("%d", &membership);
    while(membership < 1 || membership > 3){
        printf("Choose a valid option: ");
        scanf("%d", &membership);
    }

    discount = calculateDiscount(membership, cartValue);
    printf("\n   Final Bill\n");
    printf("%.1f",calculateFinalBill(discount));




}

float calculateDiscount(int membershipStatus, float cart){

    float discountPer = 0.0;

    switch(membershipStatus){
        case 1:
            discountPer = 0.2;     //Apply 20% discount
            break;
        
        case 2:
            discountPer = 0.1;     //Apply 10% discount
            break;

        case 3:
            discountPer = 0.02;     //Apply 2& discount
        break;
    }

    return(cart-(cart*discountPer));

}

float calculateFinalBill(float bill){
    
    float finalBill = bill;

    finalBill = bill * 1.15;      //Applies 15% sales tax

    if(bill <= 5000.0){
        finalBill = finalBill + 300;      //Applies flat delievery charge if discounted cost less pkr 5000
    }


    return finalBill;

}