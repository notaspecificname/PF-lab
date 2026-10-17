#include <stdio.h>
#include <string.h>
int main(){

    char student_names[3][50];
    int marks[3][3];
    int sum = 0;
    int avg = 0;

    for(int i = 0; i <3;i++){
        printf("Student %d, Input your name: ",i+1);
        scanf(" %[^\n]",student_names[i]);
        
        for(int j = 0; j<3;j++){
            printf("Enter marks of Subject %d: ",j+1);
            scanf("%d",&marks[i][j]);
        }
    }
    printf("\n\t ****REPORT**** \n");
    for(int x =0;x<3;x++){
        sum = 0;
        for(int y = 0;y<3;y++){
            sum = sum + marks[x][y];
        }
        avg = sum/3;
        printf("Student %d: %s \t Average: %d \n", x+1, student_names[x], avg);
        avg = 0;
    }

}