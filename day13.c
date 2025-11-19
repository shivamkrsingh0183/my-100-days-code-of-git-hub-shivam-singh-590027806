
#include<stdio.h>
//QUESTION2:write a programm to print number from 1 to n
// int main(){
//     int n;
//     printf("enter n \n");
//     scanf("%d",&n);

//     for(int i=1;i<=n;i++){
//         printf(" %d \n ",i);
//     }

//     return 0;
// }

//QUESTION1 :write  a program  to implement a basic calculator using switch case for =,-,*,/
int main(){
    int a;
    scanf("%d",&a);
    int b;
    scanf("%d",&b);
    int choice;

    do{
    printf("enter  your choice +/-/*or divide\n");
    scanf("%d",&choice);
    switch(choice){
        case 0:printf("you result is:%d\n",a+b);break;
        case 1:printf("you result is:%d\n",a-b);break;
        case 2:printf("you result is:%d\n",a*b);break;
        case 3:
        if(b!=0){printf("you result is:%d\n",a/b);
        }
        else{
            printf("divison by zero is not allowed");
        }
        break;
        case 4:printf("exit");break;
        default:printf("please enter a valid choice");
    }
    }while(choice!=4);
        
    
    return 0;
}