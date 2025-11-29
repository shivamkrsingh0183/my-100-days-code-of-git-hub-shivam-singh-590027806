#include<stdio.h>
#include<string.h>

//QUESTION1:Write a program to take an integer array arr and an integer k as inputs. 
//The task is to find the maximum element in each subarray of size k moving from left to right.
// Print the maximum elements for each window separated by spaces as output.

int main() {
    int n, k;
    printf("Enter a number n: \n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elemnts of array: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the size of the window: \n");
    scanf("%d", &k);
    for (int i = 0; i <= n - k; i++) {
        int max = arr[i];
        for (int j = i; j < i + k; j++) {
            if (arr[j] > max) {

                max = arr[j];
            }
        }
        printf("%d ", max);
    }
    printf("\n");
    return 0;
}
