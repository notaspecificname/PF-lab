#include <stdio.h>
int main(){

    char name[50];
    int age;
    float height;
    char grade;
    float cgpa;

    printf("Enter student name: ");
    fgets(name, 50, stdin);
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter height: ");
    scanf("%f", &height);
    printf("Enter grade: ");
    scanf(" %c", &grade);
    printf("Enter CGPA: ");
    scanf("%f", &cgpa);
    printf("\n \n");

    printf("========== STUDENT REPORT ========== \n \n");
    printf("Name \t: %s", name);
    printf("Age \t: %d \n", age);
    printf("Height \t: %.2f \n", height);
    printf("Grade \t: %c \n", grade);
    printf("CGPA \t: %.2f \n", cgpa);




}