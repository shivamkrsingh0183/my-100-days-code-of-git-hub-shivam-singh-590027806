#include<stdio.h>
#include<string.h>

//QUESTION1:Store multiple student records (name, roll number, marks) into a file using fprintf().
// Then read them using fscanf() and display each record.

struct student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    FILE *fp;
    struct student s;
    int n, i;
    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("file cannot be created.\n");
        return 1;

    }
    printf("emter number of students: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("\nEnter name: ");
        scanf("%s", s.name);
         printf("Enter roll number: ");
        scanf("%d", &s.roll);
        printf("Enter marks: ");
        scanf("%d", &s.marks);
        fprintf(fp, "%s %d %d\n", s.name, s.roll, s.marks);
    }
    fclose(fp);
     fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("file cannot be opened.\n");
        return 1;
    }
    printf("Student Records\n");
     while (fscanf(fp, "%s %d %d", s.name, &s.roll, &s.marks) == 3) {
        printf("Name: %s,Roll: %d,Marks: %d\n", s.name, s.roll, s.marks);
    }
    fclose(fp);
    return 0;
}
