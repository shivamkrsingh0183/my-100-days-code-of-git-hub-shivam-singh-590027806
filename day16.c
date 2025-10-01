
#include<stdio.h>
//QUESTION1:Write a program to check if a number is a palindrome.

 int main(){
     int n,reverse;
     reverse=0;
     printf("enter number to check if it is palindrome or not \n");
     scanf("%d",&n);

         while(n!=0){
         int digits=n%10;
         reverse=reverse*10+digits;
         n=n/10;
         printf("%d \n",reverse);
        
         
         
         
         
     if(n==reverse){
             printf("%d is a palindrome number",reverse);
         }
         if(n!=reverse){
            printf("%d is not a palindrome number",reverse);
         }
         }
     return 0;
}