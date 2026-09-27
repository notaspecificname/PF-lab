#include <stdio.h>
int main(){

    float data_used;
    float price_per_gb;
    float basic_cost;
    int discount;
    float discount_cost;
    discount = 0;

    printf("Enter data used in GB: ");
    scanf("%f", &data_used);
    printf("Enter price per GB: ");
    scanf("%f", &price_per_gb);

    basic_cost = data_used * price_per_gb;

    if(data_used >= 200)
    {
        discount = 15;
    }
    else if(data_used >= 100)
    {
        discount = 10;
    }
    else if (data_used>=50)
    {
        discount = 5;
    }

    discount_cost = basic_cost - (basic_cost*discount/100);

    printf("Basic Cost: %.2f \n", basic_cost);
    printf("Discount Amount: %d\%\ \n", discount);
    printf("Final Cost: %.2f", discount_cost);


}