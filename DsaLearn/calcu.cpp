#include<iostream>
using namespace std;

int main (){

 int NUM1,NUM2;
 int result;

 cout<<"enter the value of NUM1"<<endl;
 cin>>NUM1;

 cout<<"enter the value of NUM2"<<endl;
 cin>>NUM2;

 string operation ;
 //string MUL,DIV,ADD,SUB ;

   cout<< "Enter the first 3 letter of your operation you want to do";
   cout<<"enter MUL for multiplication,enter DIV for division, enter ADD for addition,enter SUB for subtraction"<<endl;

 cin>>operation;

 if (operation == "MUL"){
     result = NUM1 * NUM2;
     cout<<result<<endl;
 }else if(operation == "DIV"){
     result = NUM1 / NUM2;
     cout<<result<<endl;
 }else if(operation == "ADD"){
     result = NUM1 + NUM2;
     cout<<result<<endl;
 }else if (operation == "SUB"){
     result = NUM1 - NUM2;
     cout<<result<<endl;
 }else {
     cout<<"Chutiya h kya, instruction dekhai nhi deta ?"<<endl;
 }



}