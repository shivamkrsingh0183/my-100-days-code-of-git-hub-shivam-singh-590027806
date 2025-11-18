#include<stdio.h>
#include<string.h>

//QUESTION1:Create an enumeration for days (SUNDAY to SATURDAY)
// and print each day with its integer value.



enum days{SUNDAY,MONDAY,TUESDAY,WEDNESDAY,THURSDAY,FRIDAY,SATURDAY};
int main(){
    enum days choice;

    printf("Days of the Week with thier integer value:\n");
    for (choice= SUNDAY; choice <= SATURDAY; choice++) {
        printf("%d  ", choice);

        switch(choice) {
            case 0:printf("SUNDAY\n"); break;
            case 1:printf("MONDAY\n"); break;
            case 2:printf("TUESDAY\n"); break;
            case 3:printf("WEDNESDAY\n"); break;
            case 4:printf("THURSDAY\n"); break;
            case 5:printf("FRIDAY\n"); break;
            case 6:printf("SATURDAY\n"); break;
            default:printf("there is only 7 days in a week");break;
        }
    }

    return 0;
}
