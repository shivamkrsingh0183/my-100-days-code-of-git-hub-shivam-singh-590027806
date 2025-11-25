#include<stdio.h>
#include<string.h>
//QUESTION1:Reverse each word in a sentence without changing the word order.
int main(){
    char s[]="i love india";
    int n=strlen(s);
    printf("%d\n",n);
    char *ptr=strstr(s,"india");
     if(ptr!=NULL){
        printf("string india is found at index:%ld\n",ptr-s);
    }

    char *str=strstr(s,"love");
    if(str!=NULL){
        //printf("string love found at index:%ld",str-s);
    }
    for(int i=ptr-s;i>=str-s;i--){
        printf("%c ",s[i]);
    }
    for(int i=n;i>=ptr-s;i--){
        printf("%c ",s[i]);
    } 
    return 0;
}

//QUESTION2:Check if one string is a rotation of another.
int main(){
    char s[21];
    printf("enter first string to check:\n");
    scanf("%s",&s[21]);
    char s1[21];
    printf("enter second string to confirm:\n");
    scanf("%s",&s1[21]);
    char s2[51];
    strcpy(s2,s);
    strcat(s2,s);
        if(strstr(s2,s1)){
            printf("s and s1 are rotation of each other\n");
        }
        else{
            printf("s and s1 are not rotation of each other\n");
}
return 0;
}