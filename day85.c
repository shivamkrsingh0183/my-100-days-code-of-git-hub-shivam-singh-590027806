#include<stdio.h>
#include<string.h>

//QUESTION1:Assign explicit values starting from 10 and print them.




enum values{first=10,second,third};
int main(){
    enum values assign;
    for(assign=first;assign<=third;assign++){
        printf("%d ",assign);
    

    switch(assign){
        case 10:printf("FIRST\n");break;
        case 11:printf("SECOND\n");break;
        case 12:printf("THIRD\n");break;
        default:printf("please enter a valid input");break;
    }
}
    return 0;
}



