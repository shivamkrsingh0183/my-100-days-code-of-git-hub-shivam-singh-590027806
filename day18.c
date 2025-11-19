
#include<stdio.h>
//QUESTION1:Write a program to print all factors of a given number.

// int main(){
//     int n=18;
//    int factors=0;
    
//     for(int i=1;i<=18;i++){
//         if(n%i==0){
//             factors=factors+1;
//             printf("%d \n",i);
//         }

//     }

//     return 0;
// }
    

//QUESTION2:Write a program to find the HCF (GCD) of two numbers.


int main(){
    int a,b,gcd;
    printf("enter 1st number \n");
    scanf("%d",&a);
    printf("enter 2nd number \n");
    scanf("%d",&b);
    int remainder;
    int remainder1;
    if(a==1||b==1){
        gcd=1;
        printf("gcd of two numbers are:%d\n",gcd);
    }
    else{
if(b!=0){
    for(int i=1;i<a;i++){
        for(int j=1;j<b;j++){
            if(a%i==0 && b%j==0){
                remainder=i;
                remainder1=j;
                if(remainder=remainder1){
                    gcd=remainder;
                }
                else{
                    gcd=1;
                }
            }
        
        }}
        printf("gcd of a and b is :%d",gcd);
    }
    else{
        printf("gcd of number cannot be find\n");
    }
}

return 0;
}