#include <stdio.h>

typedef struct Address{
    char *city;
    int zipCode;
    char *state;
} Address;

typedef struct Student{
    int rollNo;
    char *name;
    float CGPA;
    Address addr;
} Student;

int main(){
    Student student1;
    student1.rollNo = 10;
    student1.name = "Moosa Baig";
    student1.CGPA = 3.5;
    student1.addr.city = "Kolachi";
    student1.addr.zipCode = 6969420;
    student1.addr.state = "Sindh";

    printf("Roll No: %d\n", student1.rollNo);
    printf("Name: %s\n", student1.name);
    printf("CGPA: %.1f\n", student1.CGPA);
    printf("City: %s\n", student1.addr.city);
    printf("Zip Code: %d\n", student1.addr.zipCode);
    printf("State: %s\n", student1.addr.state);
}
