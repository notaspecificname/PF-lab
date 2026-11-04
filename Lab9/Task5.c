#include <stdio.h>

void printSensorData(void *ptr, char type);
int main(){

    float temp = 0.0;
    int motionDetected = 0;
    char door = 'a';

    printf("Enter temperature in celsius: ");
    scanf("%f", &temp);

    printf("Enter 1 if motion detected else enter 0: ");
    scanf("%d", &motionDetected);

    printf("Enter 'O' if door open else enter 'C': ");
    scanf(" %c", &door);

    printSensorData(&temp, 'f');
    printSensorData(&motionDetected, 'i');
    printSensorData(&door, 'c');


}

void printSensorData(void *ptr, char type){
    if(type == 'f'){
        float *val = (float *)ptr;
        printf("Temperatue is %.2f", *val);
        printf("\n");
    }
    else if(type == 'i'){
        int *val = (int *)ptr;
        
        if(*val == 0){
            printf("No motion");
        }
        else{
            printf("Motion detected");
        }
        printf("\n");
    }
    else if(type == 'c'){

        char *val = (char *)ptr;

        if(*val == 'O'){
            printf("Door open");
        }
        else{
            printf("Door closed");
        }
        printf("\n");
    }
}