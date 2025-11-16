#include<stdio.h>
#include<string.h>
//QUESTION1:Count spaces, digits, and special characters in a string.
// int main(){
//     char s[]="0011 @ # $ @";
//    int sp;
//     int d=0;
//     int sc=0;
//     int n=strlen(s);
//     printf("%d\n",n);
//     for(int i=0;i<n;i++){
//         if(s[i]=='$' || s[i]=='%' || s[i]=='@'||s[i]=='#' || s[i]=='!'){
//             sc+=1;
//         }
//         else if(s[i]=='0' || s[i]=='1' ||s[i]=='2'||s[i]=='3'||s[i]=='4'||s[i]=='5'||s[i]=='6'||s[i]=='7'||s[i]=='8'||s[i]=='9'){
//             d+=1;
//         }
//     }

//     printf("n.o of digits in string is:%d\n",d);
//     printf("n.o of special characters in string is:%d\n",sc);
//     sp=n-(d+sc);

//     printf("n.o of spaces in string is:%d",sp);

//     return 0;
// }
  




//QUESTION2:Replace spaces with hyphens in a string.
// int main(){
//     char s[]="programming in c";
//     int n=strlen(s);
//     printf("%d\n",n);

//     for(int i=0;i<n;i++){
//         if(s[i]==' '){
//             s[i]='-';
//         }
//     }
//     printf("%s\n",s);
//     return 0;

// }
int main(){
    int a=11;
   
    int b=21;
   
    int temp;
     temp=a;
     a=b;
     b=temp;

    
    printf("%d %d",a,b);

    return 0;
}

    
