#include<stdio.h>
#include<string.h>

//QUESTION1:Define a structure Student with name, roll_no, and marks,
// then read and print one student's data.

int main(){
    struct student{
        char name[21];
        int roll_no;
        int marks;
    };
    struct student s1;
    strcpy(s1.name,"shivam");
    s1.roll_no=1001;
    s1.marks=100;
    printf("name of student is:%s\n",s1.name);
    printf("roll n.o of student is:%d\n",s1.roll_no);
    printf("marks of the student is:%d\n",s1.marks);
    return 0;
}