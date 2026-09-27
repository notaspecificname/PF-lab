//This code includes both left and right shifting. I did this for practice and u can choose to ignore the one commented.
//It works but its more so for my learning

#include <stdio.h>
int main(){

    int permission;

    printf("Input permission value: ");
    scanf("%d",&permission);

    //Using right shifting of the variable value

    if(!(permission & 1) && !(permission >> 1) & 1 && !(permission >> 2) & 1 && !(permission >> 3) & 1)
        printf("User has no permission");
    if (permission & 1)
        printf("User has viewing permission \n");
    if((permission >> 1) & 1)
        printf("User has training permission \n");
    if((permission >> 2) & 1)
        printf("User has Testing permission\n");
    if((permission >> 3) & 1)
        printf("User has deploying permission \n \n");

    if((permission >> 1)&1 && (permission >> 3) & 1)
        printf("User has both training and deployment permission");

    //Using left shifting of the checking bit value
    // if (!(permission &1) && !(permission & (1 << 1)) && !(permission & (1 << 2)) && !(permission & (1 << 3)))
    //     printf("User has no permission");
    // if (permission & 1)
    //     printf("User has viewing permission \n");
    // if (permission &(1 << 1))
    //     printf("User has training permission \n");
    // if (permission & (1 << 2))
    //     printf("User has testing permission \n");
    // if (permission & 1 << 3)
    //     printf("User has deploying permisson \n");
    
    // if(permission & (1 << 1) && permission & (1 << 3))
    //     printf("User has both training and deployment permission");


}