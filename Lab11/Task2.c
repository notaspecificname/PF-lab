#include <string.h>
#include <stdio.h>

typedef struct Product{
    int ID;
    char name[100];
    char category[100];
    int price;
    int availStock;
} prod;

void displayProductDetails(struct Product item);

int main(){

    prod shoes;
    shoes.ID = 1;
    strcpy(shoes.name, "BigOnes");
    strcpy(shoes.category,"Sneakers");
    shoes.price = 12;
    shoes.availStock = 10;

    displayProductDetails(shoes);
}

void displayProductDetails(struct Product item){
    float discount = (float)item.price * 0.95;

    printf("--Item Summary--\n");
    printf("Item name: %s\n", item.name);
    printf("Item category: %s\n", item.category);
    printf("Full price: %d | Discounted price: %.2f", item.price, discount);
}