#include <stdio.h>
#include <string.h>

int main(){
    char mail[100];
    char domain[100];

    printf("Enter ur email address: ");
    scanf("%99[^\n]", mail);

    char *at ;
    at = strchr(mail, '@');


    if(at == NULL){
        printf("Invalid Email Format");
        return 0;
    }

    printf("@ exists on index: %d",(int)(at - mail));
    strcpy(domain, at+1);
    printf("Domain: %s",domain);



}
