#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fptr;
    char username[50], password[50];
    char savedUsername[50], savedPassword[50];
    printf("Enter username: ");
    scanf("%49s", username);
    printf("Enter password: ");
    scanf("%49s", password);
    fptr = fopen("credentials.txt", "r");
    if (fptr == NULL)
    {
        printf("Error: File Not Found!");
    }
    else
    {
        fscanf(fptr, "%s %s", savedUsername, savedPassword);
        if (strcmp(username, savedUsername) == 0 && strcmp(password, savedPassword) == 0)
        {
            printf("Access Granted!");
        }
        else
        {
            printf("Access Denied!");
        }

        fclose(fptr);
    }

    return 0;
}