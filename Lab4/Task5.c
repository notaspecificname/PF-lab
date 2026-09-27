#include <stdio.h>
#include <stdbool.h>
int main(){

    int role;
    int status;
    int sec_level;
    bool access;
    access = true;

    printf("Enter User role: ");
    printf("1 = Admin, 2 = Researcher, 3 = Student \n");
    scanf("%d", &role);
    printf("Enter Account Staus: ");
    printf("1 = Active, 2 = Inactive \n");
    scanf("%d",&status);
    printf("Enter Security level: ");
    scanf("%d", &sec_level);

    if(status == 2)
    {
        printf("Access denied");

    }
    else if(role == 1 && sec_level <3)
    {
        printf("Access denied");
    }
    else if(role == 2 && sec_level <2)
    {
        printf("Access denied");
    }
    else if(role == 1 && sec_level <1)
    {
        printf("Access denied");
    }
    else
    {
        printf("Access Allowed at level %d", sec_level);
    }

 


}