#include<iostream>
using namespace std ;

class Node{

  public:
    int data ;
    Node* next ;

    //construtor
    Node(int data){ //always have the same as class name
        this->data = data ;
        this->next = NULL ;
    }

};

void insertAtHead(Node* &head, int d){
    //creating a temp variable
    Node* temp = new Node(d) ;
    temp->next = head ;
    head = temp ;
}

void insertAtTail(Node* &tail, int d){
    //creating a temp ;
    Node* temp = new Node(d) ;
    tail->next = temp ;
    tail = temp ;
}
void insertAtMid(Node* &head,Node* &tail,int pos, int d){

    if(pos==1){
        insertAtHead(head,d);
        return ;
    }


    

    Node* temp = head;
    int cnt = 1 ;
    while(cnt<pos-1){
        temp = temp->next ;
        cnt++ ;
    }

    if(temp->next == NULL){
        insertAtTail(tail,d) ;
        return ;
    }
    

    //creating node for d
    Node* nodeToInsert = new Node(d) ;
    nodeToInsert->next = temp->next ;
    temp->next = nodeToInsert ;
}

void print(Node* &head){
    Node* temp = head ;
    while(temp != NULL){
        cout<<temp->data<<" " ;
        temp= temp->next ;
    }
    cout<<endl;
}

int main(){
    Node* node1 = new Node(10) ;

    Node* head = node1 ;
    Node* tail = node1 ;
    print(head) ;
    insertAtTail(tail,645) ;
    print(head) ;
    // insertAtHead(head,12) ;
    // print(head) ;
    insertAtHead(head,11) ;
    print(head) ;

    insertAtMid(head,tail,3,22) ;
    insertAtMid(head,tail,1,174) ;
    print(head);

    return 0 ;

}