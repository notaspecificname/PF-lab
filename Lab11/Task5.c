#include <stdio.h>
struct HospitalRecord{
    char *hospitalName;
    char *location;
    int roomNumber;

    struct PatientInfo{
        int patientID;
        int age;
        char *name;
        char *diagnosis;
    } patient;
};
int main(){
    struct HospitalRecord record1 = {"Jinnah", "Karachi", 12, {42, 41, "Mushtaq", "Cancer"}};

    struct HospitalRecord *ptr;
    ptr = &record1;

    //Acessing records using dot operator
    printf("Hospital Name: %s\n", (*ptr).hospitalName);
    printf("Location: %s\n", (*ptr).location);
    printf("Room number: %d\n",(*ptr).roomNumber);
    printf("Patient ID: %d\n",(*ptr).patient.patientID);
    printf("Age: %d\n",(*ptr).patient.age);
    printf("Name: %s\n",(*ptr).patient.name);
    printf("Diagnosis: \n",(*ptr).patient.diagnosis);
    printf("| | | | | | | | | | | |\n");

    //Accessing using -> operator
    printf("Hospital Name: %s\n", ptr->hospitalName);
    printf("Location: %s\n",ptr->location);
    printf("Room number: %d\n", ptr->roomNumber);
    printf("Patient ID: %d\n",ptr->patient.patientID);
    printf("Age: %d\n",ptr->patient.age);
    printf("Name: %s\n",ptr->patient.name);
    printf("Diagnosis: \n",ptr->patient.diagnosis);
}






