#include <iostream>
using namespace std;

class Node {

    public:
    int data;
    Node* left;
    Node* right;

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

    if (data >  root -> data)
        InsertInBST(root -> right, data);          //Enter data in left node
    
    else    
        InsertInBST(root -> left, data);         //Enter data in right node

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

Node* maxi (Node* root) {

    Node* temp = root;

    while (temp -> right != NULL){
        temp = temp -> right;
    }
    return temp;
}

Node* mini (Node* root) {

    Node* temp = root;

    while (temp -> left != NULL){
        temp = temp -> left;
    }
    return temp;
}

int main () {

    Node* root = NULL;

    cout << "Enter data to create BST" << endl;
    takeInput(root);

    cout << "Maximum data of BST = " << maxi(root) -> data << endl;
    cout << "Minimum data of BST = " << mini(root) -> data << endl;
}

// 10 8 21 7 27 5 4 3 -1