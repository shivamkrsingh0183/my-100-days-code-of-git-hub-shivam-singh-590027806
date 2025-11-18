#include<stdio.h>
#include<string.h>

//QUESTION1:Define an enum for traffic lights (RED, YELLOW, GREEN) 
//and print 'Stop', 'Wait', or 'Go' based on its value.

enum traffic{RED,YELLOW,GREEN};
int main(){
    enum traffic lights;
    int choice;
    printf("enter light numbers to get instructions\n");
    scanf("%d",&choice);
    lights=choice;
    switch(choice){
        case 0:printf("stop");break;
        case 1:printf("wait");break;
        case 2:printf("go");break;
        
        
    }
    return 0;
}
