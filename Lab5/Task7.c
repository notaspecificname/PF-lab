#include <stdio.h>
int main(){     //Start main function

    float confidence; 
    float c_threshold;

    printf("Input confidence level: ");     //Inputs AI confidence percentage
    scanf("%f",&confidence);
    printf("Input Confidence Threshold");   //Inputs AI confidence threshold
    scanf("%f",&c_threshold);

    char *c_status = (confidence >= c_threshold && confidence >=50) ? "Accepted" : "Rejected";      //If confidence level greater than threshold and confidence greater than 50, model is accepted
    char *c_level = (confidence >= 90) ? "Very High" : (confidence >=75) ? "High" : (confidence >=50) ? "Moderate" : "Low";     //Checks confidence level with different values and gives suitABLE OUTPUT
    
    printf("AI model is %s \n",c_status);
    printf("Confidence level: %s \n ", c_level);

    return 0;
}   //End of main function