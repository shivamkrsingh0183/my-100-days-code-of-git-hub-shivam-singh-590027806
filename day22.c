#include<stdio.h>

//QUESTION2:Write a program to find
// the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

int main(){
    int n;
    printf("enter n upto which you want sum of series n");
    scanf("%d",&n);
    float sum=1;
    for(int i=2;i<=n;i++){
        sum+=(float)(2*i-1)/(2*i);
    //     printf("%d ",&sum);
     }
     printf("%.2f ",sum);
    

    return 0;
    }
int factorial(int n){
    int factorial=1;

    if(n==0) return 1;
    else
    for(int i=1;i<=n;i++){
        factorial*=i;
    }
    return factorial;
}
    int main(){
        int n=145;
        int sum=0;
        while(n!=0){
            int remainder=n%10;
            sum+=factorial(remainder);
            n=n/10;
        }
        // int result=factorial(5);
        // printf("%d\n",result);

        printf("%d\n",sum);
    
    if(sum==n){
       printf("given  number is a strong number\n");
    }
    else{
        printf("given number is not a strong nummber\n");
    }
    return 0;
}
