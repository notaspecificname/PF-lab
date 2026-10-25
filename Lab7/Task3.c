#include <stdio.h>
#include <string.h>
int main(){

char secret_messages[3][100];
int word_count[3];

for(int x=0; x <3;x++){     //Outer loop in which string of Capital characters is input and stored in array
    
    int count =0;
    int i = 0;
    secret_messages[x][0] = '\0';

    printf("Enter string: ");
    scanf(" %[A-Z ]", secret_messages[x]);

    

    while(secret_messages[x][i]!='\0'){ //Runs until end of string
        if(secret_messages[x][i] == ' '){   //Checks if space is found, if found increments count
            count++;
        }
        i++;    //Increments i so next character can be checked
    }

    if(strlen(secret_messages[x]) == 0){    //Checks number of characters in array index, if 0 sets word_count of that string to 0 in word_count array
        word_count[x] = 0;
    }else{
        word_count[x] = count+1;
    }
    
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

printf("\n \t ***Output***");
for(int a = 0; a <3; a++){
    
    printf("\n%s |  Word Count: %d",secret_messages[a],word_count[a]);

}



}
