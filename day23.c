
#include<stdio.h>
//QUESTION1:Write a program to find the sum of the series:
// 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.


int main(){
    int n;
    int sum=0;
    printf("enter n upto which sum of series is required: \n");
    scanf("%d",&n);


    for(int i=1;i<=n;i++){
        sum+=2*i/((4*i)-1);

        printf("sum upto n term is %d \n ",sum);
    }

return 0;
}

//QUESTION2:Write a program to print the following pattern:
// *****
// *****
// *****
// *****
// *****

// int main(){
//     for(int i=0;i<5;i++){
//         for(int j=0;j<5;j++){
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }