#include<stdio.h>
//  int main(){
//      //QUESTION1:count even and odd numbers in an array.
//    int arr[11]={0,1,2,3,4,5,6,7,8,9,12};
//    int count=0;
//     int a=0;

// int i;
//  for(i=0;i<11;i++){
//   if(i==0){
//     printf("%d is neither odd nor even",i);
//   }
//      if((arr[i])%2==0){
//          count=count+1;
//           printf("%d \n",count-1);     
//      }
  
//     }


//     for(i=0;i<11;i++){
//       if((arr[i])%2!=0){
//         a=a+1;
//         printf(" \n%d",a);
//       }

//     }


    
 

//  return 0;
//  }

// //QUESTION2:Count positive, negative, and zero elements in an array.
int main(){
  int a=0;
  int b=0;
  int c=0;
int arr[7]={0,1,2,3,4,5,-6};

for(int i=0;i<7;i++){
  if(arr[i]==0){
    a=a+1;
    printf("n.o of zeroes in array is %d \n",a);
  }
}

  for(int i=0;i<7;i++){
    if(arr[i]>0){
      b=b+1;
      printf("n.o of +ve n.os in array are %d \n",b);
    }
  }

  for(int i=0;i<7;i++){
    if(arr[i]<0){
      c=c+1;
      printf("n.o of -ve n.os in array are %d",c);
    }

  }

  return 0;
}



