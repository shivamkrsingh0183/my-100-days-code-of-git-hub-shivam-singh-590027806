#include<stdio.h>
#include<string.h>

//QUESTION1:Return a structure containing top student's details from a function.



struct details{ 
    char name[21];
    int id;
    int marks;
};

void show(struct details s[3],int highest_marks){
    for(int i=0;i<3;i++){
        if(s[i].marks>highest_marks){
            highest_marks=s[i].marks;
        }
    }
    for(int i=0;i<3;i++){
        if(s[i].marks==highest_marks){
            printf("%s\n",s[i].name);
            
            printf("%d\n",s[i].id);
            printf("%d\n",s[i].marks);
        }
    }

}
int main(){
    struct details s[3];
    for(int i=0;i<3;i++){
        scanf("%s\n",&s[i].name);
        scanf("%d\n",&s[i].id);
        scanf("%d\n",&s[i].marks);
    }
  int highest_marks=s[0].marks;
  show(s,highest_marks);
  return 0;
}