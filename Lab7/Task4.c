#include <stdio.h>
#include <string.h>


void stringinput(char grid[3][100], int index);
void lengthCalculate(char grid[3][100], int *largest);

int main(){
    char word_grid[3][100];
    int largest = 0;  

    for(int i = 0; i < 3; i++) {
        stringinput(word_grid,i);
    }
    lengthCalculate(word_grid, &largest);
    printf("\n%d",largest);



}

void stringinput(char grid[3][100], int index){

        printf("Enter 3 animals to input in row %d: ",index+1);
        scanf(" %[^\n]",grid[index]);
        

        //Flushes previous scanf value
        int c;
        while ((c = getchar()) != '\n' && c != EOF);

}

void lengthCalculate(char grid[3][100], int *largest){
    int wordStart= 0;
    int row = 0;
    int big = 0;
    
    for(int i = 0; i<3; i++){
        int c = 0;
        int charLength = 0;
        int start_idx = 0;

            while(grid[i][c] != '\0'){
                if(grid[i][c] == ' '){
                    
                    if(charLength> big){
                        big = charLength;   //Stores largest length found
                        wordStart =start_idx;        //Stores the starting index of largest word
                        row = i;        //Stores row number where largest string was foung
                        
                    }
                    charLength = 0;     //Resets charLength
                    start_idx = c+1;
                } else{
                    charLength++;
                }
                c++;

            }
        if(charLength> big){
            big = charLength;   //Stores largest length found
            wordStart =start_idx;        //Stores the starting index of largest word
            row = i;        //Stores row number where largest string was foung
        
            
        }
    }
        printf("Found in row: %d | Starting index: %d ", row+1, wordStart);
        printf("| Largest Word: ");
        for(int x = wordStart; x < wordStart + big; x++){
            printf("%c",grid[row][x]); 
        }
        *largest = big;



}