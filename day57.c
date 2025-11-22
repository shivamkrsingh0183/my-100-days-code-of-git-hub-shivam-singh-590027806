#include<stdio.h>
#include<string.h>

//QUESTION1:Write a program to take an array arr[] of integers as input,
//the task is to find the previous greater element for each element of the array in order of their appearance in the array. 
//Previous greater element of an element in the array is the nearest element on the left which is greater than the current element. 
//If there does not exist next greater of current element, then previous greater element for current element is -1.
 int main(){
  int n;
  printf("enter a number n:\n");
  scanf("%d\n",&n);
  int arr[n];

  for(int i=0;i<1;i++){
    printf("previous greater elemnent does not exist for 0th index\n");
  }
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  for(int i=1;i<n;i++){
    if(arr[i-1]>arr[i]){
      printf("previous elemnt  greater than %d element is :%d\n",i,arr[i-1]);
    }

    else{

      printf("no such element is present for %d element(-1)\n",i);
    }
  }
  return 0;
 }