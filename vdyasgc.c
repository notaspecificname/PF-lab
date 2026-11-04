#include <stdio.h>

#define MAX 100 // Maximum limit for rows to prevent buffer overflow

int main() {
    int rows, i, j;
    char arr[MAX][MAX];

    // 1. Get the number of rows from the user
    printf("Enter the number of rows: ");
    if (scanf("%d", &rows) != 1 || rows <= 0 || rows >= MAX / 2) {
        printf("Invalid input! Please enter a positive integer within a reasonable range.\n");
        return 1;
    }

    // 2. Initialize the 2D array with spaces
    for (i = 0; i < rows; i++) {
        for (j = 0; j < 2 * rows; j++) {
            arr[i][j] = ' ';
        }
    }

    // 3. Populate the 2D array with the triangle pattern
    for (i = 0; i < rows; i++) {
        // Calculate the starting column to center the triangle
        int col = rows - 1 - i;

        // Part A: Insert ascending numbers (1 up to i + 1)
        int num = 1;
        for (j = 0; j <= i; j++) {
            arr[i][col++] = num + '0'; // Convert integer digit to character
            num++;
        }

        // Part B: Insert descending numbers (i down to 1)
        num = i;
        for (j = 0; j < i; j++) {
            arr[i][col++] = num + '0'; // Convert integer digit to character
            num--;
        }

        // Null-terminate the string for safe printing
        arr[i][col] = '\0';
    }

    // 4. Print the triangle from the 2D array
    printf("\nGenerated Triangle:\n");
    for (i = 0; i < rows; i++) {
        printf("%s\n", arr[i]);
    }

    return 0;
}