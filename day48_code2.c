//Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include <stdio.h>
#include <string.h>

void reverseWords(char *sentence) {
    char *word;
    char reversedWord[100];

    word = strtok(sentence, " ");
    while (word != NULL) {
     
        int len = strlen(word);
        for (int i = 0; i < len; i++) {
            reversedWord[i] = word[len - 1 - i];
        }
        reversedWord[len] = '\0';

       
        printf("%s ", reversedWord);

       
        word = strtok(NULL, " ");
    }
}