#include<stdio.h>
#include<string.h>
//QUESTION1:Write a program to take an integer array nums of size n, and print the majority element.
//The majority element is the element that appears strictly more than ⌊n / 2⌋ times.
//Print -1 if no such element exists. Note: 
//Majority Element is not necessarily the element that is present most number of times.

int main(){
    int n;
    printf("enter an element n:\n");
    scanf("%d",&n);
    int nums[n];

    for(int i=0;i<n;i++){
        scanf("%d",&nums[i]);
    }
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(nums[j]==nums[i]){
                count++;
            }
        }
       int required_element;
        printf("%d\n",count);
        if(count>n/2){
            required_element=nums[i];
            printf("element which is greater than n/2 is:%d\n",required_element);
            break;
        }
            else{
                printf("no such elelment exists(-1)\n");
                break;
            }

        
    }
        return 0;
    }