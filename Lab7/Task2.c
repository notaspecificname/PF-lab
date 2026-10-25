#include <stdio.h>

int main() {
    char logs[3][30];
    int uppercase_count = 0;


    printf("Enter 3 CSV log entries (e.g., Admin_User,Access Granted,10:45AM):\n");
    
    for(int i = 0; i < 3; i++) {
        printf("Log %d: ", i + 1);
        
        scanf(" %[^\n]", logs[i]);
    }

    for(int i = 0; i < 3; i++) {          //outer loop goes through each log entry row
        int j = 0;
        while(logs[i][j] != '\0') {       //inner loopgoes through each character in the string
            char ch = logs[i][j];
            
            if(ch >= 'A' && ch <= 'Z') {
                uppercase_count++;
            }
            j++;
        }
    }

    // Print the final uppercase count across the entire log matrix
    printf("\nTotal number of uppercase letters across all logs: %d\n", uppercase_count);

    return 0;
}