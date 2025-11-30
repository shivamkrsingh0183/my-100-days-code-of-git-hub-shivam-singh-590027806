#include <stdio.h>
#include <stdlib.h>

//QUESTION1:Store employee data in a binary file using fwrite() and read using fread().


struct employee {
    int id;
    char name[40];
    float salary;
};
int main() {
    struct employee arr[10];
    FILE *fp;
    int n, i;
    printf("Enter number of employees: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("\nEnter id: ");
        scanf("%d",&arr[i].id);
        printf("Enter name: ");
        scanf("%s", arr[i].name);
        
        printf("Enter salary: ");
        scanf("%f",&arr[i].salary);
    }
    fp = fopen("empdata.bin","wb");
    if(fp==NULL){
        printf("File cannot be created\n");
        return 1;
    }
    fwrite(arr, sizeof(struct employee), n, fp);
    fclose(fp);
    printf("\nData written to binary file.\n");
    fp = fopen("empdata.bin","rb");
    if(fp==NULL){
        printf("Cannot open file\n");
        return 1;
    }
    printf("\nReading back data:\n");
    struct employee t;
    for(i=0;i<n;i++){
        fread(&t, sizeof(struct employee), 1, fp);
        printf("\nID: %d", t.id);
        printf("\nName: %s", t.name);
        printf("\nSalary: %.2f\n", t.salary);
    }
    fclose(fp);
    return 0;
}
