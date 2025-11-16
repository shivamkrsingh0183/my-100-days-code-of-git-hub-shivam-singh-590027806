#include<stdio.h>
#include<string.h>
//QUESTION1:Write a Program to take a sorted array arr[] and an integer x as input, 
//find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. 
//This element is called the ceil of x. If such an element does not exist, print -1.
// Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence
int main(){
    int arr[5];
    int x=11;
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);

    }
     for(int i=0;i<5;i++){
        printf("%d\n",arr[i]);
        
    }
   for(int i=0;i<4;i++){
    if(arr[i]>arr[i+1]){
        printf("invalid output,not a sorted array\n");
    }
    else{
        printf("array is sorted");

break;    }
}

printf("\n");
   for(int i=0;i<5;i++){
    if(arr[i]>=x){
    printf("%d\n",i);
   
    break;
    }
    else if(arr[i]<x){
        printf("-1\n");
    }
        
    else{
        printf("can't be predicted");
    }
   }


    
    return 0;
    
}