#include <stdio.h>
int main(){ //Start of main function

    float programming;
    float maths;
    float ai;
    float attendance;
    float average;
    char terminate[] = "Student is not eligible";

    printf("Enter attendance percentage: "); //Input Attendance percentage
    scanf("%f", &attendance);
    
    if(attendance >= 75){   //Check if attendance greater than 75. If false terminate program
        
        printf("Enter Programming Marks: "); //Input programming marks
        scanf("%f",&programming);
        printf("Input Mathematics marks: "); //Input maths marks
        scanf("%f",&maths);
        printf("Enter AI marks: "); //Input AI marks
        scanf("%f",&ai);

        if(programming >= 50 && maths >= 50 && ai >=50){    //Check if marks are above 50, if false teminate program
            
            average = (programming + maths + ai)/3;     //Calculate Average of 3 subjects
            printf("%f",average);
            if(average >= 80)                           //Check average and print suitable output
                printf("Excellent");
            else if(average >=70)
                printf("Very Good");
            else if(average>= 60)
                printf("Good");
            else if(average >= 50)
                printf("Satisfactory");
        }
        else{
            printf(terminate);
        }
    }
    else{
        printf(terminate);
    }

    return 0;
}   //end main function