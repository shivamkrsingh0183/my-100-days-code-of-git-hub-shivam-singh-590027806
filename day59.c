#include<stdio.h>
#include<string.h>

//QUESTION1:Write a program to take an integer array arr and an integer k as inputs. 
//Print the maximum sum of all the subarrays of size k.


int main() {
    int n, k;
    printf("Enter number of elements: \n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter a number k: \n");
    scanf("%d", &k);
    int maximum_Sum = 0;
    for (int i = 0; i <= n - k; i++) {

        int sum = 0;
        for (int j = i; j < i + k; j++) {
            sum += arr[j];
        }
        if (sum > maximum_Sum) {
            maximum_Sum = sum;
        }
    }
    printf("Maximum sum of any subarray of size k is: %d\n",maximum_Sum);
    return 0;
}
  