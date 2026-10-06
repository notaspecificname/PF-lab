#include <stdio.h>
int main(){

    int attendance;
    int present=0;
    int absent=0;

    for(int x=0; x < 30;x++ ){
        printf("Student present?: ");
        scanf("%d",&attendance);

        if(attendance)
            present++;
        else
            absent++;
    }

    printf("Present: %d \n", present);
    printf("Absent: %d", absent);

}