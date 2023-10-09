#include <iostream>
#include <queue>
using namespace std;

class node {

    public:

        int data;
        node *left;
        node *right;

    node(int data) {

        this -> data = data;
        this -> left = NULL;
        this -> right = NULL;
    }
};

node *buildTree(node *root) {
    
    int data;
    cout << "Enter the data = ";
    cin >> data;
    root = new node(data);

    if(data == -1)
        return NULL;

    cout << "Enter the data inserting in the left of " << data << endl;
    root -> left = buildTree(root -> left);

    cout << "Enter the data inserting in the right of " << data << endl;
    root -> right = buildTree(root -> right);

    return root;
} 

void inorder (node* root) {

    //base case
    if(root == NULL)
        return;
    
    inorder(root -> left);          //traverse left node
    cout << root -> data << " ";   //print node
    inorder(root -> right);        //traverse right node
}

void preorder (node* root) {

    //base case
    if(root == NULL)
        return;
    
    cout << root ->data << " ";   //print node
    preorder(root -> left);       //traverse left node
    preorder(root -> right);      //traverse right node
}

void postorder (node* root) {

    //base case
    if(root == NULL)
        return;
       
    postorder(root -> left);       //traverse left node
    postorder(root -> right);      //traverse right node
    cout << root ->data << " ";   //print node   
}

int main() {

    node *root = NULL;

    //creating a tree
    root = buildTree(root);

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