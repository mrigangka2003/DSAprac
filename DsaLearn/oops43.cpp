#include<iostream>
using namespace std ;

// inheritance

class parent{ //superclass or base class

  public:
  
  int id_p ;

} ;

class child : public parent {

  public :
    int id_c ;

} ;



class life{ //encapsulation

 private: 
   string name ;
   int age ;

 public : 
  int getage(){
      return this -> age ;
  }

};

int main(){
    
    //encapsulation
    //life problem ;
    //cout<<"everything is ok" <<endl;
    

    //inheritance
    child obj1 ;
    obj1.id_c = 30 ;
    obj1.id_p = 40 ;

    cout<<"child id is --> " <<obj1.id_c <<endl ;
    cout<<"parent id is -- > " <<obj1.id_p <<endl;

}