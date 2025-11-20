#include<stdio.h>
#include<string.h>

//question2:Insert an elemnt in  a sorted array at the appropriate position
int main(){
    
    int arr[10];
    printf("enter 5 elements:\n");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<8;i++){
        if(arr[i]>arr[i+1]){
            printf("not a sorted array\n");
        }
        else{
            printf("the array is sorted\n");
        }
    }
   int pos=3,value=4,n1=5;
    for(int i=n1;i>=pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=value;
    n1++;
    for(int i=0;i<6;i++){
        printf("%d\n",arr[i]);

    } 
    return 0;

}

//QUESTION2:Search in a sorted array using binary search.
int main(){
    int n;
    int n1;
    printf("enter a number n\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter n  elemnts\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    

    for(int i=0;i<n-2;i++){
        if(arr[i]>arr[i+1]){
            printf("array is not sorted \n");
        }
        else{
            printf("array is  sorted\n");
        }
        }
        
    }
      n1;
    printf("enter a number n1 to check\n");
    scanf("%d",&n1);
    int found;

    for(int i=0;i<n;i++){
        if(arr[i]==n1){
            found=1;
        }
        else{
            found=0;
        }
    }

    if(found){
        printf("element is  present in the array\n");
    }
    else{
        printf("elemnt is not in the array\n");
    }

    return 0;

}