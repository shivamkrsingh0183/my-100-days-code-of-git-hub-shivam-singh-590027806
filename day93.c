#include<stdio.h>
#include<string.h>

//QUESTION1:Find and print the student with the highest marks.


int main(){
    struct Students {
        char name[21];
        int id; 
        int marks;
    };
    struct Students arr[5];

        for(int i=0;i<5;i++){
            scanf("%s\n",&arr[i].name);
            scanf("%d\n",&arr[i].id);
            scanf("%d\n",&arr[i].marks);
        }
    
int highest_marks=arr[0].marks;
        for(int i=0;i<5;i++){
            if(arr[i].marks>highest_marks){
                highest_marks=arr[i].marks;
            }
        }
        printf("highest marks id:%d\n",highest_marks);

        for(int i=0;i<5;i++){
            if(arr[i].marks==highest_marks){
                printf("name of the student having highest marks is:%s\n",arr[i].name);
                printf("id:%d\n",arr[i].id);
            }
        }

        return 0;
    }
    
