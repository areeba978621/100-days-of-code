//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/
#include <stdio.h>
void changeDateFormat(char *date) {
    char day[3], month[3], year[5];
    sscanf(date, "%2s/%2s/%4s", day, month, year);

    if (strcmp(month, "04") == 0) {
        printf("%s-Apr-%s\n", day, year);
    } else {
        printf("Invalid month\n");
    }
}