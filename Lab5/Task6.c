#include <stdio.h>
int main(){     //Start main function

    int cat;    //CMachine learning Category
    int sub_cat;    //SubCategory

    printf("Enter machine learning category: \n");
    printf("1- Classification \n2- Regression\n3- Clustering \n4-Computer Vision \n");
    printf("Enter Option: ");       
    scanf("%d", &cat);                //Input Category

    switch(cat){        //Cheeck Category value and print suitable output

        case 1:     //Greeting selected
            printf("Enter algorithm type: \n");
            printf("1- Logistic Regression \n2- Decision Tree \n3- KNN \n");
            printf("Enter Option: ");
            scanf("%d",&sub_cat);

            switch(sub_cat){

                case 1:     //Classification selected
                    printf("Logisitic Regression");
                    break;
                
                case 2:     //Decision Tree selected
                    printf("Decision Tree");
                    break;
                
                case 3:     //KNN selected
                    printf("KNN");
                    break;
                
                default:
                    printf("Invalid value entered");
            }
        break;

        case 2:     //Regression selected
            printf("Enter algorithm type: \n");
            printf("1- Linear Regression \n2- Polynomial Regression \n3- SVR \n");
            printf("Enter Option: ");
            scanf("%d",&sub_cat);

            switch(sub_cat){

                case 1:     //Linear Regression selected
                    printf("Linear Regression");
                    break; 
                
                case 2:     //Polynomial Regressiom selected
                    printf("Polynomial Regressiom");
                    break;
                
                case 3:     //SVR selected
                    printf("SVR");
                    break;

                default:
                    printf("Invalid value entered");
            }
        break;

        case 3:     //Clustering selected
            printf("Enter algorithm type: \n");
            printf("1- K-Means \n2- Hiearchial Clustering \n3- DBSCAN \n");
            printf("Enter Option: ");
            scanf("%d",&sub_cat);

            switch(sub_cat){

                case 1:     //K-Means selected
                    printf("K-Means");
                    break;
                
                case 2:     //Hiearchial Clustering selected
                    printf("Hiearchial Clustering");
                    break;
                
                case 3:     //DBSCAN selected
                    printf("DBSCAN");
                    break;
                
                default:
                    printf("Invalid value entered");
            }   

        break;

        case 4:     //Computer Vision selected
            printf("Enter algorithm type: \n");
            printf("1- CNN \n2- YOLO \n3- R-CNN \n");
            printf("Enter Option: ");
            scanf("%d",&sub_cat);

            switch(sub_cat){

                case 1:     //CNN selected
                    printf("CNN");
                    break;
                
                case 2:     //YOLO selected
                    printf("YOLO");
                    break;
                
                case 3:     //R-CNN selected
                    printf("R-CNN");
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