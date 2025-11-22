#include<stdio.h>
#include<string.h>

//QUESTION1:Write a C program that opens an existing file (e.g., info.txt)
 //and reads its contents using fgets(). 
 //The program should print all the lines to the console until EOF (end of file) is reached.

int main(){
    FILE *sp=fopen("info.txt","r");
    char str[1111];
    if(sp==NULL){
        printf("file not found!\n");
        return 1;
    }

    while(fgets(str,sizeof(str),sp)){
    printf("%s",str);
    }
  
    fclose(sp);
    return 0;
}