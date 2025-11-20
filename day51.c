#include<stdio.h>
#include<string.h>

//QUESTION1:Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. 
//The elements in the sorted array might be repeated. 
//You need to print the first and last occurrence of the target
 //and print the index of first and last occurrence.
 // Print -1, -1 if the target is not present.
  int main(){
    int nums[5];
    int target=11;
    for(int i=0;i<5;i++){
        scanf("%d",&nums[i]);
    }
    for(int i=0;i<3;i++){
        if(nums[i]>nums[i+1]){
            printf("array is not sorted\n");
        }
 }
   
for(int i=0;i<5;i++){
    printf("%d\n",nums[i]);

}

for(int i=0;i<5;i++){
    if(nums[i]==target){
        printf("element is present in the index at :%d\n",i);
        
    }
    else{
        printf("target is not present in the array(-1)\n");
    }
}
 return 0;
}