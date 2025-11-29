#include<stdio.h>
#include<string.h>

//QUESTION1:Use pointer to struct to modify and display data using -> operator.




    struct student{
        char name[21];
        int roll_no;
        int marks;
    };
    int change(struct student *ptr){
        strcpy(ptr->name,"suyash");
        ptr->roll_no=1111;
        ptr->marks=100;

         printf("modified name:%s\n",ptr->name);
        printf("modified roll n.o:%d\n",ptr->roll_no);
        printf("modified marks:%d\n",ptr->marks);
 return 0;
 
    }

    int main(){
    struct student s1;
    scanf("%s",s1.name);
    scanf("%d",&s1.roll_no);
    scanf("%d",&s1.marks);
    printf("initial data of structure\n");
    printf("%s\n",s1.name);
    printf("%d\n",s1.roll_no);
    printf("%d\n",s1.marks);
    printf("\n");
    change(&s1);
    return 0;
}