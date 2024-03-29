#include<iostream>
using namespace std ;


class hero{

 private: //only accessible under class
 int health ;
 
 public: //u can acess from anywhere  
 char level ;
 

  hero(){ //constructor created
      cout<<"constructor called "<< endl;
  }
 void print(){
     cout<<level<<endl ;
 }

 int getHealth(){
    
     //actually a getter 
     return health ;
 }
 char getLevel (){
     //getter 
     return level ;
 }

 /*void sethealth(int h,char name){
     if(name == "A" // will give error but take the concept){
     health = h ;
    }
 }

 void setlevel(char ch ){
     level = ch ;
 }*/

};

int main(){
 //statically
 //hero mrigangka ;

 //dynamically 
 //hero *b = new hero ;
 //b-->sethealth('A') ;
 //cout<<mrigangka.getHealth()<<endl;
 //mrigangka.health = 90 ;
 //mrigangka.level = 'A' ;
 //cout<<"size of --> "<<sizeof(hero ) ;
 //mrigangka.sethealth(70) ;
 //cout<<"health is --> "<<mrigangka.getHealth()<<endl;
 //cout<<"level is --> "<<mrigangka.level<<endl;

 cout<<"hi"<<endl;
 hero ramesh ;
 cout<<"hello"<<endl;
 
 
 return 0 ;
}