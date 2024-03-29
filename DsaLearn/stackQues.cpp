#include<iostream>
using namespace std ;

class a{

  public:
  a(){
    cout<<"constructor called for class a"<<endl ; 
  }

  ~a(){
    cout<<"destructor called for class a"<<endl ; 
  }

} ;

class b:public a{

  public:
  b(){
    cout<<"constructor called for class b"<<endl ; 
  }

  ~b(){
    cout<<"destructor called for class a"<<endl ; 
  }

};

int main(){
    b obj ;


    return 0 ;
}