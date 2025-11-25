#include<stdio.h>
#include<string.h>
//QUESTION1:Print the initials of a name.
// int main(){
//     char name[]="shivam kumar singh";
//     int n=sizeof(name)/sizeof(name[0]);
//      printf("%c ",name[0]);
//     for(int i=0;i<n;i++){
//         if(name[i]==' '){
//             printf("%c ",name[i+1]);
//         }
//     }
//     return 0;
// }

// //QUESTION2:Print initials of a name with the surname displayed in full.
int main(){
    char name[]="shivam kumar singh";
    int n=sizeof(name)/sizeof(name[0]);
    printf("%d\n",n);
    printf("%c\n",name[0]);
   for(int i=0;i<n;i++){
    if(name[i]==' '){
            printf("%c\n",name[i+1]);
            break;   
    }
   }
int i = n - 1;
    while (i >= 0 && name[i] != ' ')
        i--;
    printf("%s\n", &name[i + 1]);
    
    return 0;
}