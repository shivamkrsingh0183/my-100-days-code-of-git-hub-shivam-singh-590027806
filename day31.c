
#include<stdio.h>
int main(){
 //QUESTION1:Search for an element in an array using linear search.
  int arr[5]={1,2,3,4,5};
  int key=1;
  int found=0;

  for(int i=0;i<5;i++){
      if(arr[i]==key){
          found+=i;
          printf("key is in the array at %d  index \n",found);
      }
    

   else{
        
    printf("key not in the array \n");
    }
    break;
}




  return 0;
  }

//QUESTION2:reverse an array without using extra space

//  int ar[5]={1,2,3,4,5};
//  for(int i=4;i>=0;i--){
//      printf("%d",ar[i]);
//  }

// return 0;
//  }


