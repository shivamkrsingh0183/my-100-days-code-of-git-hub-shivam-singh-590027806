#include<stdio.h>
#include<string.h>

#include<stdlib.h>
//QUESTION1:Use malloc() to allocate structure memory dynamically and print details.


struct student {
    char name[21];
    int roll_no;
    int marks;
};

int main() {
    struct student *s1 = (struct student *)malloc(sizeof(struct student));
    if (s1== NULL) {
        printf("Memory allocation failed\n");

        return 1;
    }
    scanf("%s",&s1->name);     
    scanf("%d", &s1->roll_no);

    scanf("%d", &s1->marks);
    printf("Name  : %s\n",s1->name);
    printf("Roll No: %d\n",s1->roll_no);
    printf("Marks : %d\n",s1->marks);
    free(s1);
    return 0;
}
