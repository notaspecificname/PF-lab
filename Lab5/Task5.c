#include <stdio.h>
int main(){

    float confidence;
    int user_type;

    printf("Enter Confidence value: ");
    scanf("%f",&confidence);

    printf("Enter User type\n(1- Authorized \n0- Unauthorized: )");
    scanf("%d",&user_type);

    char *recognition_status = (confidence>=80) ? "Face Recognition" : (confidence >=50) ? "Manual Verification" : "Face not recognized";
    
    printf("Recognition Status: %s ", recognition_status);

    printf("Access ");
    char *access = (confidence>=80 && user_type == 1) ? "Granted" :  (confidence <50 || user_type ==0) ? "Denied" : "Manual Verification required";

    printf("%s",access);

}