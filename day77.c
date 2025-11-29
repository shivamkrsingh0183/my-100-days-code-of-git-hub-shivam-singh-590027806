#include<stdio.h>
#include<string.h>

//QUESTION1:Write a program that reads text from input.txt,
// converts all lowercase letters to uppercase, and 
//writes the result to output.txt.

int main() {
    FILE *ptr, *ptr1;
    char ch;

    ptr = fopen("input.txt", "r");
    if (ptr == NULL) {
        printf("file input.txt cannot be opened\n");
        return 1;
    }
    ptr1 = fopen("output.txt", "w");
    if (ptr1 == NULL) {
        printf("Cannot open output.txt\n");
        fclose(ptr1);
        return 1;
    }
    while ((ch = fgetc(ptr)) != EOF) {
        if (ch >= 'a' && ch <= 'z') {
            ch = ch - 32; 
        }
        fputc(ch, ptr1);
    }
    fclose(ptr);
    fclose(ptr1);

    printf("File is converted successfully.\n");
    return 0;
}
