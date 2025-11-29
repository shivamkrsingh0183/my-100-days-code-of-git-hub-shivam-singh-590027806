#include<stdio.h>
#include<string.h>

//QUESTION1:Write a program to take an integer array arr and an integer k as inputs.
// The task is to find the first negative integer in each subarray of size k moving from left to right. 
//If no negative exists in a window, print "0" for that window. 
//Print the results separated by spaces as output.
int main() {
    int n, k;
    printf("Enter the number n: \n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of array: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter size of window: \n");
    scanf("%d", &k);
    for (int i = 0; i <= n - k; i++) {
        int found = 0; 

        for (int j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                printf("%d ", arr[j]);
                found = 1;
                break;
            }
        }
        if (found == 0) {
            printf("0 ");
        }
    }

    printf("\n");
    return 0;
}
