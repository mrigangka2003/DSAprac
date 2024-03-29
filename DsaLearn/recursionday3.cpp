#include<iostream>
using namespace std;

bool ispossible(int arr[], int size){
    if(size == 0 || size == 1){
        return true ;
    }
   if(arr[0]> arr[1]){
       return false ;
   }else{
       bool remainingPart = ispossible(arr+1 , size -1 ) ;
       return remainingPart ;
   }

}

int main() {

 int arr[5]={2,4,9,6,9};
 int size = 5 ;

 bool ans = ispossible(arr, size) ;
 if (ans){
     cout<<" array is sorted "<<endl;
 }else{
     cout<<"array is not sorted"<<endl;
 }

return 0;
}