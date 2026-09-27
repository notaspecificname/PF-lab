#include <stdio.h>
#include <stdbool.h>
int main(){

    bool obstacle;
    bool person;
    int battery;

    printf("Obstacle present?");
    scanf("%d", &obstacle);
    printf("Person detected?");
    scanf("%d", &person);
    printf("Battery Level: ");
    scanf("%d", &battery);

    if(obstacle)
    {
        if(person)
        {
            printf("Emergency Stop \n");
        }
        else
        {
            printf("Change Direction \n");
        }
    }
    else
    {
        if (battery <20)
        {
            printf("Return to Charging Station");
        }
        else
        {
            printf("Continue Moving");
        }

    }
    


    
}