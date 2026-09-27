#include <stdio.h>
#include <math.h>
int main(){

    float accuracy;
    float confidence;
    int dataset_size;
    int model_status;
    int permission;
    int role_val;
    char *role = "null";
    int deployment_permission =0;
    float model_score = 0;

    printf("Enter accuracy: ");
    scanf("%f",&accuracy);
    printf("Enter confidence: ");
    scanf("%f", &confidence);
    printf("Enter dataset size: ");
    scanf("%d",&dataset_size);
    printf("Enter model status: \n");
    printf("1. Ready\n2. Testing\n3. Training \n:");
    scanf("%d", &model_status);
    printf("Enter permission value: ");
    scanf("%d",&permission);
    printf("Enter User Role:\n1.Admin\n2.Developer\n3.Researcher\n:");
    scanf("%d",&role_val);

    switch(role_val){
        case 1:
            role = "Admin";
            break;
        
        case 2:
            role = "Developer";
            break;
        
        case 3:
            role = "Researcher";
            break;
        
        default:
            printf("Invalid value. Defaulting to \"Null\" ");
            break;
    }

    if((permission >> 3) & 1)
        deployment_permission = 1;
    
    char *deployment_status = (accuracy >=80 && confidence >= 75 && dataset_size >=1000 && model_status ==1
            && deployment_permission == 1) ? "1" : 0;
    
    if(deployment_status =="1")
        printf("\n \nModel is deployment ready! \n");
    else
        printf("Model not deployment ready");
    
    model_score = (accuracy + confidence)/2;

    printf("Model accuracy: %.2f \n", accuracy);
    printf("Model confidence level: %.2f \n", confidence);
    printf("Model Dataset size: %d \n",dataset_size);
    printf("Model score:  %.2f",model_score);

    
    return 0;


    
}