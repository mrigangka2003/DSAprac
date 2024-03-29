#include<iostream>
using namespace std;

void update(int **p){
    //p = p + 1 ;//no change
    
    //*p = *p + 1 ; //change hoga
    **p = **p + 1 ; // change hoga
}

int main() {

 /* int num = 5 ;
  cout<<num<<endl;

 //address operator --> &

 cout<<"address of num -->"<<&num<<endl;

 int *ptr =&num ;
 cout<<*ptr<<endl;

 int *n = 0 ;
 cout<<*n<<endl; 

 int i = 6;
 int *q = &i ;
 
 cout<<q<<endl;
 cout<<*q<<endl; 
 int *p = 0 ;
 p = &i;

 cout<<q<<endl;
 cout<<*q<<endl; 

 //copying a pointer 
 int i = 9;
 int *p = &i ;
 int *q = p;
 cout<<*q<<" - "<<*p<<endl;
 cout<<q<< " - " <<p<<endl; 


 float f = 10.5 ;
 float p = 2.5 ;

 float* ptr = &f;
 (*ptr)++ ;
 cout<<*ptr<<endl;
 *ptr = p ;
 cout<<f<<endl;
 cout<<*ptr<<" "<<f<<" "<<p;

 int *ptr = 0 ;
 int a = 10 ;
 *ptr = a ;
 cout<<*ptr<<endl;

 //double pointer -->lecture 27
 int i = 5 ;
 int *ptr = &i ;
 int **ptr2 = &ptr ;
 cout<<endl;
 cout<<"before "<<i<<endl;
 cout<<"before "<<ptr<<endl;
 cout<<"before "<<ptr2<<endl;
 update(ptr2) ;
 cout<<endl<<"After "<<i<<endl ;
 cout<<"After "<<ptr<<endl ;
 cout<<"After "<<ptr2<<endl ;*/
 
 int f = 6 ;
 int *p = &f ;
 int *q = p ;
 (*q)++ ;
 cout<< f << endl ;
 
 //the journey wouldn`t be so easy !! tight your sit belt and let`s ready to fly !! 

return 0;
}