#include<iostream>
using namespace std ;

class Node{

 public : 
  int data ;
  Node* next ; //getting error cos class name and node name was different 
  //constructor 
  Node(int data){
      this -> data = data ;
      this -> next = NULL ;
    }

    //destructor
    ~Node{
        
    }
};

void insertathead(Node* &head, int d){
    //new node created 
    Node* temp = new Node(d) ;
    temp -> next = head ; //pointing head
    head = temp ;
}

void insertattail(Node* &tail, int d){
    Node* temp = new Node(d) ;
    tail -> next = temp ;
    tail = temp ; 
}

void insertatposition(Node* &head,Node* &tail,int position, int d){

    //insert at starting  
    if(position == 1 ){
        insertathead(head,d) ;
        return ;
    } 

    Node* temp = head ;
    int cnt = 1 ;
    while(cnt< position-1){
         temp = temp->next ;
         cnt++ ;
    }
     
    //inserting at tail

    if(temp->next ==NULL){
        insertattail(tail,d);
        return ;
    }
    //creating a new node for d
    Node* Node2insert = new Node(d) ;
    Node2insert -> next = temp -> next ;
    temp -> next = Node2insert ; 

}

void print(Node* &head){
    Node* temp = head ;
    while(temp!= NULL){
        cout<< temp -> data <<" " ;
        temp = temp -> next ;
    }
    cout<<endl ;
}

void deletenode(Node* head, int position){
    if(position == 1 ){
      Node* temp = head ;
      head = head->next ;
      //memory free
     delete temp ;

    }else{
        //deleting any middle element or last

    }
}

int main(){
  
  Node* node1 = new Node(10);
  //cout<<node1->data<<endl; 
  //cout<<node1->next<<endl;
  

  //head pointed to node1 
  Node* head = node1 ;
  Node* tail = node1 ;
  print(head) ;
  insertathead(head, 12) ;
  print(head) ;
  insertathead(head,15) ;
  print(head) ;
  insertattail(tail,645) ; //insertattail ,as the function name suggest 
  print(head) ;
  insertatposition(head,tail,5,67) ; //just entered a element in the position 
  print(head) ;

  cout<<"head "<<head->data <<endl;
  cout<<"tail "<<tail->data <<endl ; 


  return 0 ;
}