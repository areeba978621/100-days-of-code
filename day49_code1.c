//Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/
#include <stdio.h>
#include <string.h>

void printInitials(char *name) {
    char *token;
    char initials[100] = "";

    token = strtok(name, " ");
    while (token != NULL) {
        strcat(initials, token);
        strcat(initials, ".");
        token = strtok(NULL, " ");
    }
    initials[strlen(initials) - 1] = '\0'; // Remove the last dot
    printf("%s\n", initials);
}