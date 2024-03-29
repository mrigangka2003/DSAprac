#include<iostream>
using namespace std ;


//one element in a tree is called node
//Ancestor == upar ke sabhi nodes ;
//Decendent == niche k nodes ;
//leaf = jiske child nhi h  ;

class Node{
    public:
    int data ;
    Node* left ;
    Node* right ;

    Node(int d){
        this -> data = d ;
        this -> left = NULL ;
        this -> right = NULL ;
    }
};

Node* buildTree(Node* root){

    cout<<"Enter the data of the node " << endl;
    int data ;
    cin >> data ;
    
    root = new Node(data) ;

    if(data == -1){
        return NULL ;
    }

    cout<<"inserting data for left "<<endl ;
    root->left = buildTree(root->left) ;
    cout<<"inserting data for right "<<endl ;
    root->right = buildTree(root->right) ;

    return root ;

}


int main(){

    Node* root = NULL ;
    root = buildTree(root) ;

    return 0 ;
}