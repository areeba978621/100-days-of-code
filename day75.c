//Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

/*
Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/
#include <stdio.h>
#include <string.h>

int main() {
    char filename[100];
    FILE *file;
    char text[100];

    printf("Enter the filename: ");
    scanf("%s", filename);

    file = fopen(filename, "a");
    if (file == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    printf("Enter the text to append: ");
    scanf(" %[^\n]", text);

    fprintf(file, "%s\n", text);

    printf("File updated successfully with appended text.\n");

    fclose(file);

    return 0;
}