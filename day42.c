#include<stdio.h>
#include<string.h>
//QUESTION1:Count vowels and consonants in a string.
int main(){
    char s[]="Programminginc";

    int count1=0;
    int c;

    int n=strlen(s);

    printf("%d\n",n);

    for(int i=0;i<n;i++){
        if(s[i]=='a'|| s[i]=='A'||s[i]=='i'||s[i]=='I'||s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U'||s[i]=='e'||s[i]=='E'){
            count1+=1;
        

        }
        
    
     }

     printf("n.o of vowels in the tring is:%d\n",count1);

     c=n-count1;
        
            printf("n.o of consonant in string is :%d \n",c);
    

    return 0;
}
//QUESTION2:Convert a lowercase string to uppercase 
//without using built-in functions.
int main(){
    char s[]="string";
   int n=strlen(s);
    printf("length of string is:%d\n",n);
    for(int i=0;i<n;i++){
        if(s[i]>='a' && s[i]<='z'){
            s[i]=(int)s[i]-32;
        }
        printf("%c\n",s[i]);
        }
        return 0;
    }





