
#include<stdio.h>
//QUESTION2:Write a program to find the sum of digits of a number.


// int main(){
// int n=151;
// int sum=0;
// int digits;

// while(n!=0){
//  digits=n%10;
//  sum=sum+digits;

// n=n/10;
// }

// printf("sum is :  %d",sum);



// return 0;
// }

//QUESTION1:Write a program to find the LCM of two numbers.



int main() {
    int a, b, max, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);


    max = (a > b) ? a: b;

    while (1) {
        if (max % a == 0 && max % b == 0) {
            lcm = max;
            break; 
        }
        max++; 
    }

    printf("LCM of %d and %d is %d\n", a, b, lcm);

    return 0;
}
