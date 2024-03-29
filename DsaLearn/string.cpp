#include<iostream>
using namespace std;


void printsum(int arr[][4], int n, int m ){

 for(int n = 0 ; n<3; n++){
   int sum = 0  ;
   for(int m = 0 ; m<4; m++){
    sum += arr[n][m];
   }
     cout<<sum<<" ";
   }
   cout<<endl;
}

 int largestRow(int arr[][4],int n, int m ){

   int maxi = INT_MIN;
   int rowIndex = - 1 ;
   for(int n = 0 ; n<3; n++){
   int sum = 0  ;
   for(int m = 0 ; m<4; m++){
    sum += arr[n][m];
   }
    if(sum>maxi){
      maxi = sum ;
      rowIndex = n ;
    }
   }
   cout<<"the maximum number is "<<maxi<<endl;
   return n ;
 }

int main() {

   
  int arr[3][4];
   
   cout<<"taking the input of the array "<<endl;
   for(int i = 0 ; i<3;i++){
    for(int j = 0 ; j<4; j++){
      cin>>arr[i][j];
    }
  } 
   cout<<"printing the 2d array"<<endl;

   for(int i = 0 ; i<3;i++){
     for(int j = 0 ; j<4; j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
  

  printsum(arr, 3 , 4);
  cout<<"the max sum of row "<<largestRow(arr,3,3) <<endl;

return 0;
}