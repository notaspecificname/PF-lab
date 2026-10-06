#include <stdio.h>
int main(){
    int number[8];
    int val;
    int largest;
    int smallest;
    int search;
    int index_found=-1;
    
    for(int x=0; x<8;x++){
        printf("Input value: ");
        scanf("%d",&number[x]);
    }

    printf("Enter value to be searched: ");
    scanf("%d",&search);
    
    largest = number[0];
    smallest = number[0];

    printf("Array: \n");
    for(int x=0; x<8;x++){
        printf("%d ",number[x]);
        
        if(number[x] > largest)
            largest = number[x];
        
        if(number[x] < smallest)
            smallest = number[x];

        if (number[x] == search)
            index_found = x;
        
    }
    printf("\n \n");
    
    if(index_found ==-1)
        printf("Value not found \n \n");
    else
        printf("Value found at %d \n \n",index_found);


    number[2] = 32; //Insering value
    number[5] = 0; //Deleting value

    printf("Final array: \n");
    for(int x=0; x<8;x++){
        printf("%d ",number[x]);
    }

    return 0;


}