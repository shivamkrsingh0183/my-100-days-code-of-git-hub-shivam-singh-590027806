#include<stdio.h>
#include<string.h>
//QUESTION1:Write a program to take an integer array as input. 
//Only one element will be repeated. 
//Print the repeated element. 
//Try to find the result in one single iteration.
int main(){
    int arr[]={101,21,11,51,51};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("%d\n",n);

    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
        if(arr[i]==arr[j]){
        printf("repeated element is:%d\n",arr[i]);
        }
        else{
            printf("no element is repeated\n");
        }
    }
}
    return 0;
}
