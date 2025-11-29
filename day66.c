#include<stdio.h>
#include<string.h>
//QUESTION1:Write a program to take an integer array nums which contains only positive integers, 
//and an integer target as inputs. 
//The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] equals the target.
// Assume exactly one solution exists and return the indices in any order.
// Print the two indices separated by a space as output. 
//If no solution exists, print "-1 -1".
int main(){
int nums[]={11,21,51,1,101,11};
int n=sizeof(nums)/sizeof(nums[0]);
printf("size of the array is:%d\n",n);
int desired_result=99;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(nums[i]+nums[j]==desired_result){
            printf("indices of  n.os are %d %d\n",i,j);
        } 
          else{
                 printf("-1 -1");
                break;
                
            }

            }
}
    

return 0;
}
