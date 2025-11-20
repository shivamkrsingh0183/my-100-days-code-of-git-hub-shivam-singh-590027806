#include<stdio.h>
#include<string.h>

//QUESTION1:Change the date format from dd/04/yyyy to dd-Apr-yyyy.
int main(){
    int dd;
    int mm;
    int year;
    int choice;
    scanf("%d",&dd);
    scanf("%d",&mm);
    scanf("%d",&year);
    printf("date is:%d/%d/%d\n",dd,mm,year);
    if(mm==01){
        printf("please have a choice of 1\n");
    }
    else if(mm==02){
        printf("please have choice of 2\n");
    }
   else if(mm==03){

        printf("please have a choice of 3\n");
    }
   else if(mm==04){
        printf("please have a choice of 4\n");
    }
    else if(mm==05){
        printf("please have a choice of 5\n");
    }
    else if(mm==06){
        printf("please have a choice of 6\n");
    }
    else if(mm==07){
        printf("please have a choice of 7\n");
    }
    else if(mm==8){
        printf("please have a choice of 8\n");
    }
    else if(mm==9){
        printf("please have a choice of 9\n");
    }
    else if(mm==10){
        printf("please have a choice of 10\n");
    }
    else if(mm==11){
        printf("please have a choice of 11\n");
    }
    else{
        printf("-lease have achoice of 12\n");
    }
    printf("enter your choice between 1 to 12\n");
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
int main(){
    char s[]="i love my india";
    int n=strlen(s);
    printf("length of string is:%d\n",n);
    int i=0;
    for(int i=0;i<n;i++){
        printf("%c\n",s[i]);
        if(s[i]==' '){
            continue;
        }
       
    }
    return 0;
}

