//Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>
#include <string.h>

void findLongestWord(char *sentence) {
    char *word;
    char longestWord[100] = "";
    int maxLength = 0;

    word = strtok(sentence, " ");
    while (word != NULL) {
        if (strlen(word) > maxLength) {
            maxLength = strlen(word);
            strcpy(longestWord, word);
        }
        word = strtok(NULL, " ");
    }
    printf("%s\n", longestWord);
}