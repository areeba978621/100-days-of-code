//Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/
#include <stdio.h>
#include <string.h>

int isRotation(char *str1, char *str2) {
    if (strlen(str1) != strlen(str2)) {
        return 0;
    }

    
    char concatenated[200];
    strcpy(concatenated, str1);
    strcat(concatenated, str1);

    
    if (strstr(concatenated, str2) != NULL) {
        return 1; 
    } else {
        return 0; 
    }
}