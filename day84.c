#include<stdio.h>
#include<string.h>

//QUESTION1:Define an enum with SUCCESS, FAILURE, and TIMEOUT,
// and print messages accordingly.



enum status{SUCCESS,FIALURE,TIMEOUT};
int main(){
    enum status category;
    int choice;
    printf("enter your choice for output\n");
    scanf("%d",&choice);
    category=choice;
    switch(choice){
        case 0:printf("Operation SUCCESSFUL");break;
        case 1:printf("Operation FAILED");break;
        case 2:printf("OPERATION TIMEOUT");break;
        default:printf("enter a valid input");break;
    }
    return 0;

}

  