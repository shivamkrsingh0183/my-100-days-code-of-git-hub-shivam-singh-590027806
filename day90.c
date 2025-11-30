#include<stdio.h>
#include<string.h>

//QUESTION1:Define a struct with enum Gender and print person's gender.


enum Gender{MALE,FEMALE,TRANSGENDER};
int main(){
    struct person{
        char name[21];
        int id;
        enum Gender gender;
    };
    struct person p;
    int choice;
    printf("enter your gender\n");
    printf("Enter 0 for male\n");
    printf("enter 1 for female\n");
    printf("enter 2 for transgender\n");
    scanf("%d",&choice);
    switch(choice){
        case 0: printf("your gender is:MALE\n");break;
        
        case 1: printf("your gender is:FEMALE\n");break;
        case 2: printf("your gender is :TRANSGENDER\n");break;
        default:printf("please select a valid choice");break;
    }
    return 0;

}