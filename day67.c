#include<stdio.h>
#include<string.h>
//QUESTION1:Write a program to take two sorted arrays of size m and n as input.
// Merge both the arrays such that the merged array is also sorted.
// Print the merged array.
#include <stdio.h>

int main() {
    int temp;
    int c;
    int arr1[] = {1, 11, 51};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {40, 50, 60, 70};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    for(int i=0;i<n1;i++){
        if(arr1[i]>arr1[i+1]){
            printf("array 1 is not sorted\n");

        }

    int mergedSize = n1 + n2;
    int mergedArr[mergedSize]; 

    int i, j;
    for (i = 0; i < n1; i++) {
        mergedArr[i] = arr1[i];
    }

        for (j = 0; j < n2; j++) {
        mergedArr[i + j] = arr2[j];
    }

    printf("Merged Array: ");
    for (i = 0; i < mergedSize; i++) {
        if(mergedArr[i]>mergedArr[i+1]){
           mergedArr[i]=mergedArr[i+1];
           temp=mergedArr[i];
           mergedArr[i]=mergedArr[i+1];
           mergedArr[i]=temp; 

        }
        
        printf("%d ", mergedArr[i]);
    }
    printf("\n");
    break;
    }
    return 0;
}