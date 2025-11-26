#include<stdio.h>
#include<string.h>

//QUESTION1:Take two structs as input and check if they are identical.



int main(){
    struct input{
        char name[21];
        int id;
        int age;
    
    };
    struct input1{
        char name[21];
        int id;
        int age;
    
    };
    struct input s1;
    struct input1 s2;

    printf("enter name:\n");
    scanf("%s",&s1.name[20]);
    printf("enter id:\n");
    scanf("%d",&s1.id);
    printf("enter age:\n");
    scanf("%d",&s1.age);
 printf("enter second name:\n");
 
 scanf("%s",s2.name);
    printf("enter second id:\n");
    scanf("%d",&s2.id);
    printf("enter second age:\n");
    scanf("%d",&s2.age);
    if(s1.id==s2.id&&s1.age==s2.age){
        printf("two structures are identical\n");
    }
    else{
        printf("two structures are not identical\n");
    }
    return 0;
}