#include<stdio.h>
#include<string.h>

//QUESTION1:Change the date format from dd/04/yyyy to dd-Apr-yyyy.
//enum months{Jan=1,Feb,Mar,Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec};
 int main(){
//    // enum months choice;
    int dd;
    int mm;
    int year;
    int choice;
    scanf("%d",&dd);
    scanf("%d",&mm);
    scanf("%d",&year);
    printf("date is:%d/%d/%d\n",dd,mm,year);
    printf("enter your choice between 1 to 12");
    scanf("%d",&choice);
    switch(choice){
        case 1:printf("now date is:%d/jan/%d\n",dd,year);break;
        case 2:printf("now date is:%d/feb/%d",dd,year);break;
        case 3:printf("now date is:%d/mar/%d",dd,year);break;
        case 4:printf("now date is:%d/apr/%d",dd,year);break;
        case 5:printf("now date is:%d/may/%d",dd,year);break;
        case 6:printf("now date is:%d/jun/%d",dd,year);break;
        case 7:printf("now date is:%d/jul/%d",dd,year);break;
        case 8:printf("now date is:%d/aug/%d",dd,year);break;
        case 9:printf("now date is:%d/sep/%d",dd,year);break;
        case 10:printf("now date is:%d/oct/%d",dd,year);break;
        case 11:printf("now date is:%d/nov/%d",dd,year);break;
        case 12:printf("now date is:%d/dec/%d",dd,year);break;
        deafult:printf("please enter a valid choice\n");break;
    }
    return 0;

}
//QUESTION2:Print all sub-strings of a string.
