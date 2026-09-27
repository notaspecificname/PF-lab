#include <stdio.h>
int main(){

    char product[45];
    int quantity;
    float price;

    printf("Enter product name: ");
    fgets(product, 45, stdin);
    printf("Enter Quantity: ");
    scanf("%d", &quantity);
    printf("Enter price: ");
    scanf("%f", &price);
    printf("\n");

    printf("Product name: %s", product);
    printf("Quantity: %d \n", quantity);
    printf("Price: %.2f \n", price);



}