#include <stdio.h>
int main(){

    int total_rec;
    int missing_rec;
    int duplicate_rec;
    int valid1 = 1;
    int valid2 = 1;
    int valid3 = 1;
    float missing_rec_perc = 0.0;
    float duplicate_rec_perc = 0.0;

    printf("Input total records: ");
    scanf("%d", &total_rec);
    printf("Input missing records: ");
    scanf("%d", &missing_rec);
    printf("Input duplicate records: ");
    scanf("%d", &duplicate_rec);
    
    if(total_rec <= 0)
    {
        printf("Invalid Dataset \n");
        valid1 = 0;
    }
    else
    {
        missing_rec_perc = ((float)missing_rec/total_rec)*100;
        duplicate_rec_perc = ((float)duplicate_rec/total_rec)*100;
    }

    if (missing_rec_perc > 30)
    {
        printf("Poor Quality Dataset \n");
        valid2 = 0;
    }

    if(missing_rec_perc <= 30 && duplicate_rec_perc >=20)
    {
        printf("Dataset Requires Cleaning \n");
        valid3 = 0;
    }

    if(valid1 && valid2 && valid3 == 1)
    {
        printf("Dataset Ready for Training");
    }



}