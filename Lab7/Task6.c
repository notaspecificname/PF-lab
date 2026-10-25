#include <stdio.h>

void initialiseArr(int grid[4][3]);
void printArr(int grid[4][3], int row, int col);
void shiftArr(int grid[4][3], int shiftIdx);


int main(){

    int shifts[4][3];
    int insertionRow  = 0;
    int insertionArr[3];
    
    printf("Initialise Array: \n \n");
    initialiseArr(shifts);

    printf("Enter row where inserton should occur: ");
    scanf("%d", &insertionRow);
    shiftArr(shifts,insertionRow);

    printf("Enter new values to insert: ");     //Place new values in temporary array
    for(int x =0; x <3; x++){
        scanf("%d", &insertionArr[x]);
    }

    for(int x = 0; x <3; x++){
        shifts[insertionRow][x] = insertionArr[x];
    }

    printArr(shifts,4,3);

    return 0;
    
}


void initialiseArr(int grid[4][3]){

    for(int row = 0; row < 3; row++){     //Goes thru rows
        printf("\nDay %d: \n", row+1);

        for(int col = 0; col < 3; col++){    //Goes thru columns
            printf("Shift %d: ",col+1);
            scanf("%d",&grid[row][col]);
    
        }
    }
}

void printArr(int grid[4][3],int row,int col){

    for(int x = 0; x < row; x++){     //Goes thru rows
        for(int y = 0; y < col; y++){    //Goes thru columns

            printf("| %3d ",grid[x][y]);
        }
        printf("\n");
    }
    
}


void shiftArr(int grid[4][3], int shiftIdx){
    for(int x = 3; x > shiftIdx; x--){
        for(int y = 0; y <3; y++){

            grid[x][y] = grid[x-1][y];
        }
    }
}
