#include<stdio.h>
#include<string.h>

//QUESTION1:Write a program to take a string s as input. 
//The task is to find the length of the longest substring without repeating characters. 
//Print the length as output.

int main() {
    char s[101];
    int i, j;
    int start, maxlen = 0;
    printf("Enter a string: ");
    scanf("%s", s);
    for(i = 0; s[i] != '\0'; i++){
        int arr[151] = {0};
        int len = 0;
        for(j = i; s[j] != '\0'; j++){
            if(arr[(int)s[j]] == 1){
                break;
            }

            arr[(int)s[j]] = 1;
            len++;
        }
        if(len > maxlen){
            maxlen = len;
        }
    }
    printf("Longest substring length = %d\n", maxlen);
    return 0;
}
