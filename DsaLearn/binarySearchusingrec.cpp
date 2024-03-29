#include<iostream>
using namespace std ;

void print(int arr[], int s, int e){
   for(int i = s ;i<=e; i++){
       cout<<arr[i]<<" " ;
   }
   cout<<endl;
}

bool binarySearch(int arr[],int s, int e, int key){
 
   cout<<endl;
   print(arr,s,e) ;
   //base case nhi milne wala
   if(s>e){
       return -1 ;
   }
   int mid = s + (e - s )/2 ;

   cout<<endl<<"value of mid "<<arr[mid]<<endl;
   //milne wala
   if(arr[mid]==key){
       return true ;
   }

   

   if(arr[mid]<key){
      return binarySearch(arr, mid + 1, e, key);
   }else{
      return binarySearch(arr,s,mid-1,key);
   }
}


int main(){

int arr[10] = {2,4,6,10,14,16};
int size = 6 ;
int key = 16 ;

int ans = binarySearch(arr, 0 , 5 ,key) ;
if(ans){
    cout<<"present"<<endl;
}else{
    cout<<"not present"<<endl ;
}



}


