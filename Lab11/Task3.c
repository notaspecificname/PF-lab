#include <stdio.h>
#include <string.h>

typedef struct Items{
    int ID;
    char name[100];
    int quantity;
    float unitPrice;
} items;

float totalInventoryVal(items *array);
void searchAndDisplayRecord(items *array, int *itemID);

int main(){
    items array[5]; //Initialize array of struct Items
    int search = 0;
    
    for(int x = 0; x < 5; x++){     //Loops and inputs
        printf("Enter ID of product: \n");
        scanf("%d", &array[x].ID);
        getchar();

        printf("Enter name of product: \n");
        fgets(array[x].name, sizeof(array[x].name), stdin);

        printf("Enter quantity: \n");
        scanf("%d", &array[x].quantity);

        printf("Enter unit Price: \n");
        scanf("%f",&array[x].unitPrice);
    }

    printf("Total Inventory value: %.2f", totalInventoryVal(array));
    printf("\n");
    printf("Enter item ID to search: ");
    scanf("%d", &search);

    int *searchVal = &search;     //Added pointer cos why not
    searchAndDisplayRecord(array, searchVal);

    
}

float totalInventoryVal(items *array){
    float totalVal = 0;
    for(int x = 0; x < 5; x++){
        totalVal = totalVal + ((float)array[x].quantity * array[x].unitPrice);
    }

    return totalVal;
}

void searchAndDisplayRecord(items *array, int *itemID){
    int found = 0;
    for(int x = 0; x < 5; x++){
        if(array[x].ID == *itemID){
            found = 1;
            printf("ID found!\n");
            printf("Name: %s\n", array[x].name);
            printf("Item quantity: %d\n", array[x].quantity);
            printf("Unit price: %.2f\n", array[x].unitPrice);
            break;
        }
    }
    if(!found){
        printf("ID not found");
    }
    
    return;
}