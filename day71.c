#include<stdio.h>
#include<string.h>

//QUESTION:Write a C program that creates a text file named info.txt in write mode.
 //The program should take the user’s name and age as input, 
 //and write them to the file using fprintf().
 // After writing, display a message confirming that the data was successfully saved.

int main() {
    FILE *ptr;
    char name[50];
    int age;


    ptr = fopen("info.txt", "w");

    if (ptr == NULL) {
        printf("file cannot be open\n");
        return 1;
    }

    
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter your age: ");
    scanf("%d", &age);

    
    fprintf(ptr, "name: %s", name);
    fprintf(ptr, "age: %d\n", age);

    fclose(ptr);
printf("message is successfully saved in file\n");

    return 0;
}
