#include<stdio.h>
#include<string.h>
//QUESTION1:Write a program to take an array arr[] of integers as input,
// the task is to find the next greater element for each element of the array in order of their appearance in the array.
// Next greater element of an element in the array is the nearest element on the right which is greater than the current element. 
//If there does not exist next greater of current element, then next greater element for current element is -1.
int main(){
    int n;
    printf("enter a number n\n");
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d\n",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        if(arr[i+1]>arr[i]){
            printf("next element greater than %d element is:%d\n",i,arr[i+1]);
        }
        else{
            printf("no next greater element exists for %d element\n",i);
        }
    }

    for(int i=n-1;i>n-2;i--){
        printf("next greater element not defined for %d element",i);
    }
    return 0;
}


     