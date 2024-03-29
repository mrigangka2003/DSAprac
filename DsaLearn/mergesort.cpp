#include<iostream>
using namespace std ;


//need some Simplification 

void Merge(int *arr, int s, int mid , int e){
    
    int i, j, k;  
    int n1 = mid - s + 1;    
    int n2 = e - mid;    
      
    int LeftArray[n1], RightArray[n2]; //temporary arrays  
      
    /* copy data to temp arrays */  
    for (int i = 0; i < n1; i++)    
    LeftArray[i] = arr[s + i];    
    for (int j = 0; j < n2; j++)    
    RightArray[j] = arr[mid + 1 + j];    
      
    i = 0, /* initial index of first sub-array */  
    j = 0; /* initial index of second sub-array */   
    k = s;  /* initial index of merged sub-array */  
      
    while (i < n1 && j < n2)    
    {    
        if(LeftArray[i] <= RightArray[j])    
        {    
            arr[k] = LeftArray[i];    
            i++;    
        }    
        else    
        {    
            arr[k] = RightArray[j];    
            j++;    
        }    
        k++;    
    }    
    while (i<n1)    
    {    
        arr[k] = LeftArray[i];    
        i++;    
        k++;    
    }    
      
    while (j<n2)    
    {    
        arr[k] = RightArray[j];    
        j++;    
        k++;    
    }    
   

}

void MergeSort(int *arr , int s , int e ){
    if(s<e){
        int mid = (s+e)/2 ;
        MergeSort(arr,s, mid) ;
        MergeSort(arr,mid+1, e) ;

        Merge(arr,s,mid,e) ;
    }
}

void PrintArray(int *arr, int size){
    for(int i = 0 ;i<size ; i++ ){
        cout<<arr[i]<<" " ;
    }
}

int main(){
    int arr[6] ={12,11,43,5,8,7};
    cout<<"the given array is \n" ;
    PrintArray(arr, 6) ;
    MergeSort(arr, 0 , 5) ;
    cout<<endl ;
    cout<<"the sorted array is " <<endl ;
    PrintArray(arr,6) ;

    return 0 ;
}