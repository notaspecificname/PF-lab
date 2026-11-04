#include <stdio.h>

int add(int x, int y);
int multiply(int x, int y);
int findMax(int x, int y);
int compute(int a, int b, int (*op)(int , int));


int main(){

int num1, num2 = 0;
printf("Enter 2 numbers");
scanf("%d %d", &num1, &num2);

int sum = compute(num1, num2, add);
int product = compute(num1, num2, multiply);
int maxVal = compute(num1, num2, findMax);

printf("\n--- Results ---\n");
printf("Sum: %d\n", sum);
printf("Product: %d\n", product);
printf("Maximum value: %d\n", maxVal);
}

int add(int x, int y){
    return x + y;
}

int multiply(int x, int y){
    return x * y;
}

int findMax(int x, int y){
    return (x > y) ? x : y;
}

int compute(int a, int b, int(*op)(int , int)){
    return op(a,b);
}