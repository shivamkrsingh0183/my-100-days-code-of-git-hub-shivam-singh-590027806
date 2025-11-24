#include<stdio.h>
#include<string.h>

//QUESTION1:Open an existing file in append mode and allow the user to enter a new line of text.
// Append the text at the end without overwriting existing content.


int main(){
    FILE *p=fopen("data.txt","a+");
    if(p==NULL){
        printf("file could not been opened\n");

        return 1;
    }
    fputs("line is added in the file in end\n",p);
    fclose(p);
    return 0;
    
}