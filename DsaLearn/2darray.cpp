#include<iostream>
using namespace std ;



void Printsum(int arr[][4],int n , int m ) 
{
     cout<<"printing the sum "<< endl ;
     for(int i =0 ;i<3;i++)
     {
       int sum = 0 ;
       for(int j = 0 ; j<4 ; j++)
       {
            sum+=arr[i][j] ;
       } 
     cout<<sum<<endl;
  }
}

void largestRowsum (int arr[][3],int i, int j) {
  int maxi = INT_MIN ;
  int rowIndex = -1 ;

  for(int i = 0 ; i<3 ; i++){
     int sum = 0 ;
     for(int j = 0 ; j<4 ;j++){
       sum += arr[i][j] ;
     }

     if(maxi > sum){
        maxi = sum ;
        rowIndex = i ;
     }
  }
  cout<<"the biggest row sum is "<< maxi << "at "<< rowIndex << endl;
}

 int main( ) {

   //create a 2d array 

   int arr[3][4] ; //={{1,2,3,4},{4,3,2,1},{10,9,8,7}};
   //we can initialize this way too 
   //{1,2,3,4,5,6,7,8,9,10,11,12}; where this will give row wisw input 

   cout<<"enter the values of 2d arrays " <<endl; 
   
   //taking input row wise
     for(int i =0 ;i<3;i++){
       for(int j = 0 ; j<4 ; j++){
         cin>>arr[i][j] ;
        } 
    }

    //taking input coloumn wise 
    /*for(int i =0 ;i<4;i++){
       for(int j = 0 ; j<3 ; j++){
           cin>>arr[j][i] ;
       } 
   }*/
    
   //output of array  
   for(int i =0 ;i<3;i++){
       for(int j = 0 ; j<4 ; j++){
           cout<<arr[i][j]<<" " ;
       } 
       cout<<endl;
       cout<<"\n"<<endl ;
   }
  

   /*cout<<Printsum(arr,3,4)<<endl ;*/

  return 0 ;
 }