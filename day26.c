#include<stdio.h>
//QUESTION1:Write a program to print the following pattern:
//     5
//    45
//   345
//  2345
// 12345

#include <stdio.h>

//int main() {
//     int n = 5; 
//     int i, j, space;

//     for (i = n; i >= 1; i--) {
        
//         for (space = 1; space < i; space++) {
//             printf(" ");
//         }

    
//         for (j = i; j <= n; j++) {
//             printf("%d", j);
//         }

//         printf("\n");
//     }

//     return 0;
// }

// //QUESTION2:Write a program to print the following pattern:

// *

// *
// *
// *

// *
// *
// *
// *
// *

// *
// *
// *

// *





 int main() {
         int i;

     printf("*\n\n");

    for (i = 0; i < 3; i++) {
        printf("*\n");
    }
    printf("\n");

     
    for (i = 0; i < 5; i++) {
        printf("*\n");
    }
    printf("\n");

    
    for (i = 0; i < 3;i++) {
        printf("*\n");
    }
    printf("\n");

    
    printf("*\n");

    return 0;
}

