#include<stdio.h>
#include<string.h>

//QUESTION1:Read a text file and count the total number of characters, words, and lines.
// A word is defined as a sequence of non-space characters separated by spaces or newlines.


int main() {
    FILE *fp;
    int count = 0, count1 = 0,count2 = 0;
    char ch;
    int inWord = 0;

    fp = fopen("file.txt", "r");
    if (fp == NULL) {
        printf("file cannot be opened\n");
        return 1;
    }
    while ((ch = fgetc(fp)) != EOF) {
        count++;
          if (ch == '\n')
            count2++;

        if (!isspace(ch)) {
            if (inWord == 0) {
                count1++;
                inWord = 1;
            }
        } else {
            inWord = 0;
        }
    }
    fclose(fp);
    printf("Total Character in the file: %d\n", count);
    printf("Total Words in the file: %d\n",count1);
    printf("Total Lines in the file: %d\n",count2);

    return 0;
}
