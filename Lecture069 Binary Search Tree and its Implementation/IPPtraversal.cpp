#include <iostream>
using namespace std;

class Node {

    public:

        int data;
        Node *left;
        Node *right;

    Node(int data) {

        this -> data = data;
        this -> left = NULL;
        this -> right = NULL;
    }
};

Node* InsertInBST (Node* &root, int data) {
    //base case
    if (root == NULL) {
        root = new Node(data);
        return root;
    }

    if (data <  root -> data)
        InsertInBST(root -> left, data);          //Enter data in left node
    
    else    
        InsertInBST(root -> right, data);         //Enter data in right node\

    return root;
} 

void takeInput (Node* &root) {

    int data;
    cin >> data;

    while (data != -1) {
        root = InsertInBST (root, data);
        cin >> data;
    }    
}

void inorder (Node* root) {

    //base case
    if(root == NULL)
        return;
    
    inorder(root -> left);          //traverse left node
    cout << root -> data << " ";   //print node
    inorder(root -> right);        //traverse right node
}

void preorder (Node* root) {

    //base case
    if(root == NULL)
        return;
    
    cout << root ->data << " ";   //print node
    preorder(root -> left);       //traverse left node
    preorder(root -> right);      //traverse right node
}

void postorder (Node* root) {

    //base case
    if(root == NULL)
        return;
       
    postorder(root -> left);       //traverse left node
    postorder(root -> right);      //traverse right node
    cout << root ->data << " ";   //print node   
}

int main() {

    Node *root = NULL;

    //creating a tree
    takeInput(root);

    //inorder traversal
    cout << endl;
    cout << "Inorder Traversal :-" << endl;
    inorder(root);

    //preorder traversal
    cout << endl;
    cout << "Preorder Traversal :-" << endl;
    preorder(root);

    //postorder traversal
    cout << endl;
    cout << "Postorder Traversal :-" << endl;
    postorder(root);
}