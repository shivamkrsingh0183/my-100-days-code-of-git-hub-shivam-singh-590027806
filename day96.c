#include<stdio.h>
#include<string.h>

//QUESTION1:Create Employee structure with nested Date structure for joining date and print details.



int main(){
    struct date{
        int date;
        int month;
        int year;
    };

    struct employee{
        char name[21];
        int id;
       struct  date join;
    };
    struct employee e1;
    printf("enter employee's name:\n");
    fgets(e1.name,sizeof(e1.name),stdin);
    printf("\nenter employee's id:\n");
    scanf("%d",&e1.id);
    printf("enter employee's join date:\n");
    scanf("%d %d %d",&e1.join.date,&e1.join.month,&e1.join.year);
    printf("\n");
    printf("employee's name:%s\n",e1.name);
    printf("employee's id:%d\n",e1.id);
    printf("employee's join date:%d/%d/%d\n",e1.join.date,e1.join.month,e1.join.year);
    return 0;
}