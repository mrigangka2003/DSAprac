#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL) ;
    
    int n ;
    cin >> n;
    int min= INT_MAX ;
    while(n--){
        int temp ;
        cin >> temp ;
        if(temp != 0 && temp<min){
            min = temp ;
        }
    }
    
    double ans = (min * n) / n ;
    cout <<ans<<endl ;
    return 0 ;
}