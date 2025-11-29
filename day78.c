#include<stdio.h>
#include<string.h>

//QUESTION1:Read a text file and count how many vowels and consonants are in the file.
// Ignore digits and special characters.

int main() {
    FILE *fp;
    char ch;
    int vowels = 0, consonants = 0;
    fp = fopen("input.txt", "r");
    if (fp == NULL) {
        printf("Cannot open file.\n");
        return 1;
    }
    while ((ch = fgetc(fp)) != EOF) {
        if (ch >= 'A' && ch <= 'Z')
            ch = ch + 32;
        if (ch >= 'a' && ch <= 'z') {

            if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
                vowels++;
            else
                consonants++;
        }
    }
    fclose(fp);
    printf("n.o of Vowels in the file is: %d\n", vowels);
    printf("n.o of Consonants in the file is: %d\n", consonants);
    return 0;
}
