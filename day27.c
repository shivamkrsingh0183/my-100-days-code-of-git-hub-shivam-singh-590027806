#include<stdio.h>
//QUESTION1:Write a program to print the following pattern:
// *
// ***
// *****
// *******
// *********
// *******
// *****
// ***
//*
// int main(){
//     int i;

//     printf("*\n");

//     for(i=0;i<3;i++){
//         printf("*");
//     }
//     printf("\n");

//     for(i=0;i<5;i++){
//         printf("*");
//     }
//     printf("\n");

//     for(i=0;i<7;i++){
//         printf("*");
//     }
//     printf("\n");

//     for(i=0;i<9;i++){
//         printf("*");

//     }

//     printf("\n");

//     for(i=0;i<7;i++){
//         printf("*");
//     }
//     printf("\n");

//     for(i=0;i<5;i++){
//         printf("*");
//     }
//     printf("\n");

//     for(i=0;i<3;i++){
//         printf("*");
//     }
//     printf("\n");

//     printf(" *");


//     return 0;
// }


// //QUESTION2:Write a program to print the following pattern:

//    *
 //   ***
 //  *****
 // *******
 //  *****
 //   ***
 //    *

 

int main() {
    int n = 4;  // height of the upper half
    int i, j, space;

    // Upper half (including middle line)
    for (i = 1; i <= n; i++) {
        // print spaces
        for (space = i; space < n; space++) {
            printf(" ");
        }
        // print stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half
    for (i = n - 1; i >= 1; i--) {
        // print spaces
        for (space = n; space > i; space--) {
            printf(" ");
        }
        // print stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}



    

