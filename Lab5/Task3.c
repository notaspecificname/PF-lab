#include <stdio.h>
int main(){

    int cat, sub_cat;

    printf("Select a Category (1,2,3,4): \n");
    printf("1- Animal \n2- Vehicle \n3- Food\n4- Human \n \nSelect a number: ");
    scanf("%d", &cat);

    switch(cat){

        case 1: //Animal Selected
            printf("Select a subcategory (1,2,3): \n");
            printf("1- Cat \n2- Dog \n3- Bird \n \nSelect a number: ");
            scanf("%d",&sub_cat);

            switch(sub_cat){      //Choosing Animal subcategory

                case 1:
                    printf("Cat chosen");
                    break;
                case 2:
                    printf("Dog chosen");
                    break;
                case 3:
                    printf("Bird chosen");
                    break;

                default:
                    printf("Invalid Selection");
                    break;

            }       
        break;
        
        case 2:     //Vehicle Selected
            printf("Select a subcateogry (1,2,3): \n");
            printf("1- Car \n2- Bus \n3- Bike \n \n Select a number: ");
            scanf("%d",&sub_cat);

            switch(sub_cat){

                case 1:
                    printf("Car chosen");
                    break;
                
                case 2:
                    printf("Bus Chosen");
                    break;
                
                case 3:
                    printf("Bike Chosen");
                    break;

                default:
                    printf("Invalid Selection");
                    break;
            }
        break;

        case 3:     //Food Selected
            printf("Select a subcateogry (1,2,3): \n");
            printf("1- Pizza \n2- Burger \n3- Biryani \n \n Select a number: ");
            scanf("%d",&sub_cat);

            switch(sub_cat){

                case 1:
                    printf("Pizza chosen");
                    break;
                
                case 2:
                    printf("Burger Chosen");
                    break;
                
                case 3:
                    printf("Biryani Chosen");
                    break;

                default:
                    printf("Invalid Selection");
                    break;    
            }
        break;

        case 4:     //Human Selected
            printf("Select a subcateogry (1,2,3): \n");
            printf("1- Male \n2- Female \n3- Child \n \n Select a number: ");
            scanf("%d",&sub_cat);

            switch(sub_cat){

                case 1:
                    printf("Male chosen");
                    break;
                
                case 2:
                    printf("Female Chosen");
                    break;
                
                case 3:
                    printf("Child Chosen");
                    break;

                default:
                    printf("Invalid Selection");
                    break;    
            }
        break;

        default:
            printf("Invalid Selection");
            break;


    }
    
    return 0; //End main function

}