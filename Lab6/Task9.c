#include <stdio.h>
int main(){
    char word[100];
    int length = 0;
    char original[100];
    int vowels =0;
    int consonants =0;
    int isPalindrome =1;

    printf("Enter word: ");
    scanf("%s",word);

    //Copy word to Original
    while(word[length] != '\0'){
        original[length] = word[length];
        length++;
    }
    original[length] = '\0';
        

    printf("\n \nOriginal word: %s \n",original);
    
    //calculate length
    while(word[length] != '\0'){
        length++;
    }


    int last_index = length -1;
    int first_index = 0;
    char temp;

    //Reverse word
    while(first_index < last_index){
        temp = word[first_index];
        word[first_index] = word[last_index];
        word[last_index] = temp;

        first_index++;
        last_index--;
    }

    //Check palinddrome
    for (int i = 0; i < length; i++) {
        if (original[i] != word[i]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        printf("Palindrome: Yes\n");
    } else {
        printf("Palindrome: No\n");
    }

    //Count constonants and vowels
    for(int x=0; x < length; x++){
        char letter = word[x];
        if(letter == 'a' ||letter == 'e' ||letter == 'i' || letter == 'o' || letter == 'u')
            vowels++;
        else
            consonants++;
    }

    printf("Total vowels: %d \n", vowels );
    printf("Total consonants: %d", consonants);
}