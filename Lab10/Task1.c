#include <stdio.h>
#include <string.h>

int main() {
    char strArr[1000];
    char subB[] = "bad";
    char subG[] = "good";

    printf("Enter your comment: ");
    if (fgets(strArr, sizeof(strArr), stdin) != NULL) {
        strArr[strcspn(strArr, "\n")] = '\0';
    }

    printf("Total length of characters: %d\n", strlen(strArr));

    printf("Sentiment Report: ");
    char *badPtr = strstr(strArr, subB);
    char *goodPtr = strstr(strArr, subG);

    if (badPtr != NULL) {
        printf("Negative\n");

        char temp[1000];
        size_t prefixLen = badPtr - strArr;
        
        strncpy(temp, strArr, prefixLen);
        temp[prefixLen] = '\0';

        strcat(temp, "not good");

        strcat(temp, badPtr + strlen(subB));

        strcpy(strArr, temp);

        printf("Updated review (Sanitized): %s\n", strArr);
    } 
    else if (goodPtr != NULL) {
        printf("Positive\n");
    } 
    else {
        printf("Neutral\n");
    }

    return 0;
}
