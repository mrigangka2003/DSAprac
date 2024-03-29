#include<iostream>
using namespace std ;

void reverse (string& str , int i , int j){

    cout<<"call received for "<<str<<endl ;

    //basecase 
    if(i>j)
        return ;
    
    swap(str[i],str[j]);
    i++ ;
    j-- ;

    reverse(str,i,j);
}

int power(int a, int b){
    //base case 
    if (b==0)
    {
        return 1 ;
    }
    if(b==1){
        return a ;
    }
    //recursive call
    int ans = power(a,b/2);
    
    if(b%2==0){
        return ans*ans ;
    }else{
        //b is odd
        return a*ans*ans ;
    }
    
}

int main (){
  /*string name = "Mrigangka" ;
  cout<<endl;
  reverse(name,0, name.length()-1 );
  cout<<endl;
  cout<<name <<endl;
  cout<<endl; */

  int a , b ;
  cin>>a>>b;
  
  int ans = power(a,b);
  cout<<"answer is "<<ans<<endl;
 return 0 ;
}