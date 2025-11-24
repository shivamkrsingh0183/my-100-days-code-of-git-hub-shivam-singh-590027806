#include<stdio.h>
#include<string.h>
//QUESTION1:Write a Program to take an integer array nums. 
//Print an array answer such that answer[i] is equal to the 
//product of all the elements of nums except nums[i]. 
//The product of any prefix or suffix of nums is guaranteed to fit in
// a 32-bit integer.
int main(){
  int n;
  printf("enter a number n:\n");
  scanf("%d",&n);
  int nums[n];

  for(int i=0;i<n;i++){
    scanf("%d",&nums[i]); // taking input from user
  }
  int answer[n];
  for(int i=0;i<n;i++){
    int product=1;
   for(int j=0;j<n;j++){
    if(j!=i){   // checking for i not equal to j
        product*=nums[j]; // performing the multiplication for i not equal to j

    
    answer[i]=product; // initializing the elements of answer[n] array
    }
   }
}
for(int i=0;i<n;i++){
    printf("%d\n",answer[i]);
}
return 0;
}