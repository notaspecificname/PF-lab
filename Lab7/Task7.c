#include <stdio.h>

void initializeArray(float grid[3][4]);
void SensorRemoval(float grid[3][4], int index);

int main(){
    int rmvIndex = 0;
    float sensor_data[3][4];
    

    initializeArray(sensor_data);

    printf("Enter Sensor to remove: ");
    scanf("%d",&rmvIndex);
    SensorRemoval(sensor_data, rmvIndex);

    

    for(int row = 0; row < 3; row++){
     
        for(int col = 0; col < 3; col++){
            printf("|%f", sensor_data[row][col]);
            
        }
        printf("\n");
    }

}


void initializeArray(float grid[3][4]){
    
    for(int row = 0; row < 3; row++){
        printf("Day %d", row+1);

        for(int col = 0; col < 4; col++){
            printf("Enter Sensor %d value: ",col+1);
            scanf("%f",&grid[row][col]);
        }
    }
}

void SensorRemoval(float grid[3][4], int index){

    for(int row = 0; row <3; row++){
            for(int col = index; col < 3; col++){

            grid[row][col] = grid[row][col+1];
        }
    }
}



