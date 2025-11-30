#include<stdio.h>
#include<string.h>


//QUESTION1:Store details of 5 students in an array of structures and print all.
int main(){
    struct Students {
        char name[21];
        int roll_no;
        int class;
    };
    struct Students arr[5];

        for(int i=0;i<5;i++){
            scanf("%s\n",&arr[i].name);
            scanf("%d\n",&arr[i].roll_no);
            scanf("%d\n",&arr[i].class);
        }
    
for(int i=0;i<5;i++){
            printf("name of the student is:%s\n",arr[i].name);
            printf("roll no of student is:%d\n",arr[i].roll_no);
            printf("class of the student is:%d\n",arr[i].class);
            printf("\n");
        }
        return 0;
    }
    
