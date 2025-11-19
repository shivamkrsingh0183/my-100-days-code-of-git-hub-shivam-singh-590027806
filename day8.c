
#include<stdio.h>
//int main(){
   // QUESTION1.  Write a program to input three numbers and find
    // the largest among them using if–else.

//     int a,b,c;
//     printf("the 1st n.o is:");
//     scanf("%d",&a);

//     printf("the 2nd n.o is:");
//     scanf("%d",&b);

//     printf("the 3rd n.o is:");
//     scanf("%d",&c);

//     if(a==b==c){
//         printf("none of the numbers are greater all three are equal");

//       if(a>b && a>c){
//             printf(" a is the greatsest number ");
//         }
        

//         if(b>c && b>a){
//             printf("b is the greatest number");
//         }
// }
        

// else{
//    printf("c is the greatset n.o");
// }


          
    
//     return 0;
// }
    
    
//QUESTION2:Write a program to input
// a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
int main(){
    char ch;
    printf("enter character to check");
    scanf("%c",&ch);

    
    

    if(ch>='a' && ch<= 'z'){
        printf("%c is a lowercase alphabet",ch);
    }



   if(ch>='A'&& ch<='Z'){
    printf("%c is a uppercase alphabet");

    }
    if(ch=='&'|| ch=='@'||  ch=='!'||  ch=='%'||  ch=='*'){
        printf("%c is a special character");
    }

 if(ch>='0' && ch<='9'){
  printf("%c is a digit");
 }
return 0;
}


