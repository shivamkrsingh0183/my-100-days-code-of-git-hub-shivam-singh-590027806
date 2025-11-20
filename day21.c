
#include<stdio.h>
//QUESTION1:Write a program to swap the first and last digit of a number.
int main(){
    int n=2159;
    int temp;
    int remainder1;
    int remainder2;
    int remainder3;
    int remainder4;
    while(n!=0){
         remainder1=n%10;
        n=n/10;
         remainder2=n%10;
        n=n/10;
         remainder3=n%10;
        n=n/10;
       
         remainder4=n%10;
     temp =remainder1;
     remainder1=remainder4;
     remainder4=temp;

    printf("\n");
     n=remainder4*1000;
     n+=remainder3*100;
     n+=remainder2*10;
     n+=remainder1;
     printf("%d\n",n);
     break;
    }
     return 0;
}

        
    
 
// //QUESTION2:Write a program to check if a number is a perfect number.

int main(){
    int n;
    int sum=0;
    printf("enter number to check");
    scanf("%d",&n);

    for(int i=1;i<n;i++){
        if(n%i==0){
            sum=sum+i;
            printf("\n %d \n",sum);
        }

    }

    if(sum==n){
        printf(" \n number is perfect number");
    }


    else{
        printf("the number is not perfect number");

    }
          return 0;
}  


