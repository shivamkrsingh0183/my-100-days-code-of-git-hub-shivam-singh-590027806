#include<stdio.h>
#include<string.h>

//QUESTION4:Write a function that accepts a structure as parameter and prints its members.



struct function{
    int id;
    char name[21];
};
void parameter(struct function s){
    printf("id is:%d\n",s.id);
    printf("name is:%s\n",s.name);
}
int main(){
    struct function s;
    s.id=1111;
    strcpy(s.name,"ravish");
    parameter(s);
    return 0;
}

