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


    // ~Node(){
    //     int value = this -> data ;
    //     if(this -> next != NULL){
    //         delete next ;
    //         next = NULL ;
    //     }

    //     cout<<"memory is free for node with data " <<endl ;
    // }


};

void insertathead(Node* &head, int d){
    //new node created 
    Node* temp = new Node(d) ;
    temp -> next = head ; //pointing head
    head = temp ;
}
void print(Node* &head){
    Node* temp = head ;
    while(temp!= NULL){
        cout<< temp -> data <<" " ;
        temp = temp -> next ;
    }
    cout<<endl ;
}

Node* reverse(Node* &head){  //iteraive way
    Node* prev = NULL ;
    Node* curr = head ;
    Node* forward = NULL;

    while(curr!=NULL){
        forward = curr->next ;
        curr->next = prev ;
        
        prev= curr ;
        curr = forward ;
    }

    return prev ;
}
Node* reverseRec(Node* &head){
    //base case
    if(head==NULL || head->next == NULL){
        return head ;
    }

    Node* newHead = reverseRec(head->next) ;
    Node* headNext = head->next ;
    headNext->next = head ;
    head->next = NULL ;

    return newHead ;

}
void deletenode(Node* &head, int position){
    //start node or head node
    if(position == 1 ){
        Node* temp = head ;
        head= head -> next ;
        //deleting the first node , making its memory free
        delete temp ;
    }
    else{
        //deleting any middle node or last node 
        Node* curr = head ;
        Node* prev = NULL ;
        int cnt = 1 ;
        while(cnt<position){

            prev = curr ;
            curr = curr -> next ;
            cnt++ ;
        }

        prev -> next = curr -> next ;
        //curr -> next = NULL ;
        delete curr ;

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
  insertathead(head, 182) ;
  insertathead(head, 128) ;
  insertathead(head, 812) ;
  print(head) ;
  deletenode(head,1) ;
  print(head) ;
  Node* newHead = reverseRec(head) ;
  print(newHead) ;

  return 0 ;
  }