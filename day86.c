#include<stdio.h>
#include<string.h>

//QUESTION1:se enum to represent menu choices (ADD, SUBTRACT, MULTIPLY)
// and perform operations using switch.

enum menu{ADD,SUBTRACT,MULTIPLY};
int main(){
    enum menu choices;
    int a;
    int b;
    int options;
    printf("enter a number a\n");
    scanf("%d",&a);
    printf("enter a number b\n");
    scanf("%d",&b);
    scanf("%d",&options);
    printf("enter what arithmetic operation you want to perform\n");

    choices=options;
    switch(options){
      case 0:printf("add Output:%d",a+b);break;


      case 1:printf("subtract output:%d",a-b);break;

      case 2:printf("multiply output:%d",a*b);break;
      default:printf("please enter a  vallid output");break;  
}


return 0;
}
