#include<stdio.h>
#include<string.h>

//QUESTION1:Write a program to take two strings s and t as inputs (assume all characters are lowercase).
// The task is to determine if s and t are valid anagrams,
// meaning they contain the same characters with the same frequencies.
// Print "Anagram" if they are, otherwise "Not Anagram".
int main() {
    char s[200], t[200];
    int count1[26] = {0}, count2[26] = {0};
    int i;
    printf("Enter first string: ");
    scanf("%s", s);
    printf("Enter second string: ");
     scanf("%s", t);
     for(i = 0; s[i] != '\0'; i++){
        count1[s[i] - 'a']++;
    }
    for(i = 0; t[i] != '\0'; i++){
        count2[t[i] - 'a']++;
    }
     int same = 1;

     for(i = 0; i < 26; i++){
        if(count1[i] != count2[i]){
            same = 0;
            break;
        }
     }
     if(same == 1)
        printf(" both strings are Anagram\n");
    else
        printf(" both strings are Not Anagram\n");

     return 0;
}

