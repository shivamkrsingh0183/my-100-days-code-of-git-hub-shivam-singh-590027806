
#include<stdio.h>
//QUESTION1:Write a program to find the product of odd digits of a number.

 int main(){
     int n;
     int product;
     printf("enter number \n");
     scanf("%d",&n);


     while(n!=0){
         int digits = n%10;
         n=n/10;

         if(digits%2!=0){
           product=digits*digits;

         }

         printf("%d",product);
         break;

     }

     return 0;
 }
//QUESTION2:

    