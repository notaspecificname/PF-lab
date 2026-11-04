#include <stdio.h>

int main(){
    int image[3][3];
    int (*ptr)[3] = image;

    for(int row = 0; row<3; row++){
        for(int col = 0; col < 3; col++){
            scanf("%d",&ptr[row][col]);
        }
    }

    for(int row = 0; row<3; row++){
        for(int col = 0; col < 3; col++){
            ptr[row][col] *=2; 
        }
    }

    printf("Updated 2d aaray:\n");
    for(int row = 0; row<3; row++){
        for(int col = 0; col < 3; col++){
            printf("|%d",ptr[row][col]);
        }
        printf("\n");
    }
}