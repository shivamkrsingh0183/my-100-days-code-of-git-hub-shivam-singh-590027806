#include<stdio.h>
 #include <stdio.h>

//QUESTION1: Merge two arrays.

int main() {
    int arr1[] = {10, 20, 30};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {40, 50, 60, 70};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int merged_Size = size1 + size2;
    int merged_arr[merged_Size]; 
    int i, j; 
    for (i = 0; i < size1; i++) {
        merged_arr[i] = arr1[i];
    }
    for (j = 0; j < size2; j++) {
        merged_arr[i+j] = arr2[j];
    }
    printf("Merged Array is: ");
    for (i = 0; i < merged_Size; i++) {
        printf("%d ", merged_arr[i]);
    }
    printf("\n");

    return 0;
}

//QUESTION2:Find the digit that occurs the most times in an integer number.

 int main(){
     int arr[7]={1,11,11,11,11,11,5};
    int count=1;
    int i=0;

     for(i=0;i<8;i++){
         if(arr[i]==arr[i+1]){
             count=(count+1);
             

          printf(" the most ocurring element in array is%d  \n %d \n",arr[i],count);
         }
     }
     return 0;
 }

