#include<string.h>
#include<stdio.h>

//QUESTION2:Find the longest word in a sentence.
#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200];
    char word[50], longest[50];
    int i = 0, j = 0, maxLen = 0;

    printf("Enter a sentence:\n");
    fgets(sentence, sizeof(sentence), stdin);

    while (sentence[i] != '\0') {

        if (sentence[i] != ' ' && sentence[i] != '\n') {
            word[j++] = sentence[i];
        } 
        else {
            word[j] = '\0'; 

            if (strlen(word) > maxLen) {
                maxLen = strlen(word);
                strcpy(longest, word);
            }

            j = 0; 
        }

        i++;
    }

    word[j] = '\0';
    if (strlen(word) > maxLen) {
        strcpy(longest, word);
    }

    printf("Longest word: %s\n", longest);

    return 0;
}



//QUESTION2:Check if two strings are anagrams of each other.
// int main(){
//     char s1[]="worls";
//     char s2[]="world";
//     int n1=strlen(s1);
//     int n2=strlen(s2);
//     printf("length of string s1 is:%d\n",n1);
//     printf("length of string s2 is:%d\n",n2);
    

//     int i=0;
//     int j=0;
//     int found;
//     while(s1[i]!='\0'){
//       while(s2[j]!='\0'){
//      if(s1[i]!=s2[j] || n1!=n2){
    
//       found=0;
//      }
//      else{
    
//       found=1;
//      }
//      i++;
//      j++;
//     }
//   }
//     if(found){
//       printf("strings are anagrams of each other\n");
//     }
//     else{
//       printf("strings are not anagram of each othern");
//     }
  
//     return 0;
// }