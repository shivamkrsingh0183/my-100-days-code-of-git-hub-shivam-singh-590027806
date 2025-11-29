#include<stdio.h>
#include<string.h>

//QUESTION:Write a program to take an input array of size n.
// The array should contain all the integers between 0 to n except for one.
// Print that missing number
int main(){
    int arr[]={1,2,4,5,6};
    int n = sizeof(arr)/sizeof arr[0];
    int sum=(n+1)*(n+2)/2;
    int sum1=0;
    for(int i=0;i<n;i++){
        sum1+=arr[i];
    }
    printf("sum of elements of array is:%d\n",sum1);
    int missing_element=sum-sum1;
    printf("required element is:%d\n",missing_element);
    return 0;
}
