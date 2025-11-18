#include<stdio.h>
#include<string.h>

//QUESTION1:Create an enum for months and print how many days each month has.
enum months{jan=1,feb,march,apr,may,june,july,aug,oct,nov,dec};


int main(){
    enum months days;
    int choice;
    printf("enter your choice to get output\n");
    scanf("%d",&choice);
    days=choice;
    switch(choice){
        case 1:printf("january has total 31 days");break;
        case 2:printf("february has total 28  or 29(leap)days");break;
        case 3:printf("march has total 31 days");break;
        case 4:printf("april has total 30 days");break;
        case 5:printf("may has total 31 days");break;
        case 6:printf("june has total 30 days");break;
        case 7:printf("july has total 31 days");break;
        case 8:printf("august has total 31 days");break;
        case 9:printf("september has total 30 days");break;
        case 10:printf("october has total 31 days");break;
        case 11:printf("november has total 30 days");break;

        case 12:printf("december has total 31 days");break;      
}
return 0;
}