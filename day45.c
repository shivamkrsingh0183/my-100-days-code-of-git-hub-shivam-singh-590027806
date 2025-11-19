#include<stdio.h>
#include<string.h>
#include<ctype.h>
//QUESTION1:Count frequency of a given character in a string.
// int main(){
//     char s[]="programming";
//     int n=strlen(s);
//     int count=0;
//     char c='m';
//     printf("length of string is %d\n",n);
//     for(int i=0;i<n;i++){
//         if(s[i]==c){
//             count++;
//         }
//     }
//     printf(" n.o of times given character is repeated:%d\n",count);
//     return 0;
// }

//QUESTION2:Toggle case of each character in a string.
int main(){
    char s[]="Hello";
    int n=strlen(s);
    printf("length of the string is:%d\n",n);
    for(int i=0;i<n;i++){
        if(s[i]>='a' && s[i]<='z'){
            s[i]=(int)s[i]-32;
        }
        else if(s[i]>='A' && s[i]<='Z'){
            s[i]=(int)s[i]+32;
        }
        else{
            printf("not a string any other character\n");
        }
        printf("%c\n",s[i]);
    }
    return 0;
}