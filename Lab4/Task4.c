#include <stdio.h>
#include <stdbool.h>
int main(){

    float accuracy;
    int latency;
    bool approval;
    bool valid1 = true;
    bool valid2 = true;
    bool valid3 = true;

    printf("Input Model Accuracy: ");
    scanf("%f", &accuracy);
    printf("Input Prediction Latency (milliseconds): ");
    scanf("%d", &latency);
    printf("Input Model approval status(1 = Approved, 0 = Not Approved): ");
    scanf("%d", &approval);

    if (accuracy < 90)
    {
        printf("Accuracy too low \n");
        valid1 = false;
    }
    if(latency > 100)
    {
        printf("Latency too high \n");
        valid2 = false;
    }
    if (approval == 0)
    {
        printf("Model not approved \n");
        valid3 = false;
    }
    
    if(valid1 && valid2 && valid3)
    {
        printf("Model can be deployed");
    }    
    
}