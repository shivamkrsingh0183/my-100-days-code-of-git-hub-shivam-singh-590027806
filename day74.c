#include<stdio.h>
#include<string.h>

//question1:Take two filenames from the user – a source file 
//and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().


#include <stdio.h>
int main() {
    char source_file[100], destination_file[100];
    FILE *ptr1, *ptr2;
    int ch;
    printf("Enter source file name: ");
    scanf("%s", source_file);
    printf("Enter destination file name: ");
    scanf("%s", destination_file);
    ptr1 = fopen(source_file, "r");
    if (ptr1 == NULL) {
        printf("source file cannot be opened.\n");
        return 1;
    }
    ptr2 = fopen(destination_file, "w");

    if (ptr2 == NULL) {
        printf("destination file cannot be opened.\n");
        fclose(ptr1);
        return 1;
    }
    while ((ch = fgetc(ptr1)) != EOF) {
        fputc(ch, ptr2);
    }
    printf("File copied successfully.\n");
    fclose(ptr1);
    fclose(ptr2);
    return 0;
}
