#include<iostream>
using namespace std;

int firstOccu(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid = s+(e-s)/2;
    int ans = -1 ;
    while(s<=e){
        if (arr[mid]==key)
        {
            ans = mid;
            e = mid - 1;
        } else if (key>arr[mid])
        {
            s= mid + 1;
        } else
        {
         e = mid - 1;
        }
        mid = s+(e-s)/2;
        
    }
    return ans ;
}

int main() {
  int even[6] ={1,2,2,3,3,4};
  int odd[5] = {1,5,5,6,7};

  cout<<"the first occurance of 2 "<<firstOccu(even,6,2)<<endl;
  cout<<"the first occurance of 7 "<<firstOccu(odd,5,7)<<endl;

return 0;
}