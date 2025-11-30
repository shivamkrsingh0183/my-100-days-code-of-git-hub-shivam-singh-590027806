#include<stdio.h>
#include<string.h>

//question1:Create an enum for user roles (ADMIN, USER, GUEST)
//and display messages based on role.

enum users{ADMIN=1,USER,GUEST};
int main(){
    enum users choices ;
    int roles;
    scanf("%d",&roles);
    choices=roles;
    
    switch(roles){
        case 1:printf("you are the admin");break;
        case 2:printf("you are the guest");break;
        case 3:printf("welcome guest");break;
        default:printf("please enter a valid choice");break;
    }
    return 0;

}
