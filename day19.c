
#include<stdio.h>
//QUESTION2:Write a program to find the sum of digits of a number.


int main(){
int n=151;
int sum=0;
int digits;

while(n!=0){
 digits=n%10;
 sum=sum+digits;

n=n/10;
}

printf("sum is :  %d",sum);



return 0;

}

//QUESTION1:Write a program to find the LCM of two numbers.

int main(){
    int a,b,gcd,lcm;
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
        printf("gcd of a and b is :%d\n",gcd);
    }
    else{
        printf("gcd of number cannot be find\n");
    }
}

lcm=(a*b)/gcd;
printf("lcm of the two numbers are:%d\n",lcm);

return 0;
}