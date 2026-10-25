#include <stdio.h>
#include <string.h>

int main(){

    char sentences[3][100];
    char vowels[] = "aeiouAEIOU";
    int compare = 0;
    int numberOfVowels = 0;
    
    printf("Enter string: ");
    for(int i = 0; i<3; i++){

        if(i<2){
        scanf(" %[^;]%*c",sentences[i]);
        }
        else{
            scanf(" %[^\n]",sentences[i]);
        }

    }

    for(int i=0; i<3; i++){     //Takes the whole sentence
        while(compare != strlen(sentences[i])){     //Takes each letter of the sentence
            for(int j=0; j<10;j++){  //Takes the vowels string for comapring
                
                if(sentences[i][compare] == vowels[j]){
                    numberOfVowels++;
                }
            }
            compare++;  //Incremenrs comapre value to get new char
        }
        printf("Number of vowels found in sentence %d: %d \n",i+1,numberOfVowels);
        numberOfVowels = 0;
        compare = 0;        //Resets compare to 0
    
    }

    return 0;
 
}