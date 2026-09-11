#include <stdio.h>
int main(){

    int C_Score;

    printf("Enter confidence score: ");
    scanf("%d",&C_Score);

    if(C_Score < 0 || C_Score > 100)
    {
       printf("Invalid Score");
    }
    else if(C_Score <= 49)
    {
        printf("Low Confidence");
    }
    else if(C_Score <= 79)
    {
        printf("Moderate Confidence");
    }
    else if(C_Score <= 100)
    {
        printf("High Confidence");
    }


    

}