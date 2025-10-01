#include<stdio.h>
//QUESTION2.Write a program to check if a number is prime.

// int main(){
//      int n;
//      printf("enter n.o to check if it is prime or not \n");
//      scanf("%d",&n);
//      for(int i=2;i<n;i++){
//          if(n%i!=0){
//             printf("n is prime");
            
//              }
            
//              else{
//                  printf("n is not prime");
                 
//              }
//              break;
//          }
//      return 0;
//  }

//QUESTION1:Write a program to check if a number is an Armstrong number

#include <math.h>

int main() {
    int num, originalNum, remainder, result = 0, n = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    
    while (originalNum != 0) {
        originalNum /= 10;
        n++;
    }

    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    
    if (result == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}
