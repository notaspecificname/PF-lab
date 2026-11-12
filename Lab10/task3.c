#include <stdio.h>
#include <string.h>
int main(void)
{
    char mail[100];
    char domain[100];
    char *at;
    printf("input your email address: ");
    scanf("%99[^\n]", mail);
    at = strchr(mail, '@');      
    if (at == NULL)
    {
        printf("Invalid email format\n");
    }
    else
    {
        printf("@ exists at index: %d\n",(int)(at-mail));
        strcpy(domain, at + 1);  
        printf("Domain: %s", domain);
    }

    return 0;
}