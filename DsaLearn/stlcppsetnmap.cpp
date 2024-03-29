#include<iostream>
#include<set> //using set , stores only one element and return in sorted way , insertion and deletion has been done but no modification 
#include<map> //one key vil point to one value , value can be same of different keys , but same key doesnt have two different values
using namespace std ;


// operation we can use 
//   set.erase() //s.find() these fours complexity is O(logn)
//   set.insert()
//   s.count()-->tells us about the element is present there or not 

//and the rest size() and begin() end() empty()'s time complexity is 0(1) ; 
    

int main(){
    
    /*set<int> s ; //created a set s of int datatype ;
    s.insert(5) ;
    s.insert(5) ;
    s.insert(5) ;
    s.insert(5) ;
    s.insert(5) ;
    s.insert(1) ;
    s.insert(3) ;
    s.insert(3) ;
    s.insert(3) ;
    s.insert(3) ;
    s.insert(3) ;
    s.insert(6) ;

    //for output--> get this in a sorted way only get a single element 
    for(auto i : s){
        cout<< i <<" " ;
    }

    s.erase(s.begin()) ;
    cout<<endl ;
    for(auto i : s){
        cout<< i <<" " ;
    }

    cout<<endl ;
    cout<<"the element is present or not --> " << s.count(5)<<endl ;
    cout<<"the element is present or not --> " << s.count(10)<<endl ; */



    // starting map onwards --> output does in a sorted order 
    //same count() function is use here to find out the element is present in that list or not 
    //this map has been implemented by redblack tree or using balance tree --> complexity O(log n)
    //unordered map has been implemented by the hash maps 

    map<int, string> m ;
    m[1] = "babbar" ;
    m[2] = "Mrigangka" ;
    m[3] = "datta " ;


    //first elements of a maps are printing out / or the keys 
    cout<<"keys of map " <<endl ;
    for(auto i : m ){
        cout<<i.first<<" " ;
    }
    cout<<endl ;
    // another way of inseting the elements 
    m.insert( {645, "Tintu"}) ;

    
    for(auto i : m ){
        cout<<i.first<<" " ;
    }
    cout<<endl ;

    //printing the values of a map 
    cout<<"printing the values "<<endl<<endl ; 
    for(auto i : m ){
        cout<<i.second<<" " ;
    }
    //we can use the delete element too 
    //now printing the keys and values together 
    cout<< endl << "Keys --> Values " <<endl ;
    for(auto i : m ){
        cout<<i.first<<" " <<"-> "<<i.second <<endl ;
    }
    return 0 ;
}