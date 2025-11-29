#include<stdio.h>
#include<string.h>

//QUESTION1:Ask the user for a filename. 
//Check if it exists by trying to open it in read mode. If the file pointer is NULL,
// print an error message; otherwise, read and display its content.

int main() {
    FILE *fp;
    char name[100];
    char ch;
    printf("Enter filename: ");
    scanf("%s", name);
    fp = fopen(name, "r");
    if (fp == NULL) {
        printf("file does not exist or cannot be opened.\n");
        return 1;
    }
else{
    printf("content of file\n");
    while ((ch = fgetc(fp)) != EOF) {

        putchar(ch);
    }
}
    fclose(fp);
    return 0;
}

