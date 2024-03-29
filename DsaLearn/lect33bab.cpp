#include<iostream>
#include<array>
using namespace std ;

bool issorted(int *arr, int size){
    if(size == 1 || size == 1){
        return true ;
    }

    if(arr[0]>arr[1]){
        return false ;
    }
    else{
        bool remainingPart = issorted(arr+1,size-1) ;
        return remainingPart ;
    }
}

int main(){
 
 int arr[5] ={2,4,6,8,9} ;
 int ans = issorted(arr,5) ;
 cout<<ans << endl ;

    

    return 0 ;
}