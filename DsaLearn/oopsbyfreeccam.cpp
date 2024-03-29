#include<iostream>
using namespace std ;

class Employee{ 
 public : 
   string name ;
   string company ;
   string specialization ;
   int age ;

   Employee(string Name, String Company_, String specl_ ,int age_){
       name = Name ;
       company = Company_ ;
       specialization = specl_ ;
       age = age_ ; 
   }

};

int main(){

 Employee Mriganka ;
 /*//not the right way to do so !! 
 Mriganka.name = "Mrigangka" ;
 Mriganka.company = "Microdoft" ;
 Mriganka.specialization = "Ai/ML-Blockchain" ;
 Mriganka.age = 19 ; */

  Employee("Mrigangka", "Microsoft","AIML/Blockchain", 19) ;
  
  cout<< "name -" <<Mriganka.name<<endl ;
  cout<< "company -" <<Mriganka.company<<endl ;
  cout<< "Specialization -" <<Mriganka.specialization<<endl ;
  cout<< "age -" <<Mriganka.age<<endl  ;

    return 0 ;
}