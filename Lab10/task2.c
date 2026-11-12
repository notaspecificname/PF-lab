#include <stdio.h>
#include <string.h>
int main() 
{
    char names[10][50];
    char temp[50];
    printf("input students names:\n");
    for(int i=0;i<10;i++)
    fgets(names[i],48,stdin);
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<9;j++)
        {if(strcmp(names[j],names[j+1])>0)
        {
            strcpy(temp,names[j]);
            strcpy(names[j],names[j+1]);
            strcpy(names[j+1],temp);

        }}
    }
    printf("in alphabatical order:\n");
    for(int i=0;i<10;i++)
    {
      printf("%s",names[i]);
    }
return 0;
}