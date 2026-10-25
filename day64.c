//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/
#include <stdio.h>
int lengthOfLongestSubstring(char *s) {
    int n = 0;
    int max_length = 0;
    int index[256] = {0}; // Array to store the last index of each character

    for (int i = 0; s[i] != '\0'; i++) {
        if (index[(unsigned char)s[i]] > n) {
            n = index[(unsigned char)s[i]];
        }
        index[(unsigned char)s[i]] = i + 1; // Store the next index of the character
        if (i - n + 1 > max_length) {
            max_length = i - n + 1;
        }
    }

    return max_length;
}