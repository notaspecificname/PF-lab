#include <stdio.h>
int main(){     //Start main function

    int cat;    //Conversation Category
    int sub_cat;    //SubCategory

    printf("Enter conservation category: \n");
    printf("1- Greeting \n2- Study\n3- Weather \n4- Help \n");
    printf("Enter Option: ");       
    scanf("%d", &cat);                //Input Category

    switch(cat){        //Cheeck Category value and print suitable output

        case 1:     //Greeting selected
            printf("Enter response type: \n");
            printf("1- Hello \n2- How are you? \n3- Goodbye \n");
            printf("Enter Option: ");
            scanf("%d",&sub_cat);

            switch(sub_cat){

                case 1:     //Hello selected
                    printf("Hi! What's up?");
                    break;
                
                case 2:     //How are you selected
                    printf("I'm al good! What about you?");
                    break;
                
                case 3:     //Goodbye selected
                    printf("Bye Byeee! See you next time");
                    break;
                
                default:
                    printf("Invalid value entered");
            }
        break;

        case 2:     //Study selected
            printf("Enter response type: \n");
            printf("1- Programming \n2- Mathemmatics \n3- AI \n");
            printf("Enter Option: ");
            scanf("%d",&sub_cat);

            switch(sub_cat){

                case 1:     //Programming selected
                    printf("programming very cool fr");
                    break;
                
                case 2:     //Mathematics selected
                    printf("Maths is my fav subject :D");
                    break;
                
                case 3:     //AI selected
                    printf("Beep Boop");
                    break;

                default:
                    printf("Invalid value entered");
            }
        break;

        case 3:     //Weather selected
            printf("Enter response type: \n");
            printf("1- Today \n2- Tomorrow \n3- Forecast \n");
            printf("Enter Option: ");
            scanf("%d",&sub_cat);

            switch(sub_cat){

                case 1:     //Today selected
                    printf("Raining, its pouring");
                    break;
                
                case 2:     //Tomorrow selected
                    printf("Windy");
                    break;
                
                case 3:     //Forecast selected
                    printf("Cloudy with a chance of meatballs!");
                    break;
                
                default:
                    printf("Invalid value entered");
            }   

        break;

        case 4:     //Weather selected
            printf("Enter response type: \n");
            printf("1- About Chatbot \n2- Commands \n3- Exit \n");
            printf("Enter Option: ");
            scanf("%d",&sub_cat);

            switch(sub_cat){

                case 1:     //About selected
                    printf("This fully open source project was single-handedly developed my Moosa");
                    break;
                
                case 2:     //Commands selected
                    printf("Press numbers to continue");
                    break;
                
                case 3:     //Exit selected
                    printf("Press Ctrl+C to end program");
                    break;
                
                default:
                    printf("Invalid value entered");
            }   

        break;

        default:
            printf("Invalid Value entered");
        


    }

    return 0;

}