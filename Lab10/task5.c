#include <stdio.h>
int main()
{
    FILE *fptr;
    int rollNo, marks;
    char name[50];
    fptr = fopen("marks.txt","r");
    if (fptr == NULL)
    {
        printf("Error: File Not Found!");
    }
    else
    {
        while (fscanf(fptr, "%d %s %d", &rollNo, name, &marks) != EOF)
        {
            printf("%d   %s  %d\n", rollNo, name, marks);
        }
        fclose(fptr);
    }

    return 0;
}