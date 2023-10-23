#include <iostream>
#include <queue>
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
        InsertInBST(root -> left, data);         //Enter data in right node\

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

void levelOrderTraversal (Node *root) {

    queue <Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {

        Node* temp = q.front();
        q.pop();

        if(temp == NULL){
            //level complete new traversal
            cout << endl;
            if(!q.empty()) // queue still have some child nodes
                q.push(NULL);
        }
        else{
            cout << temp -> data << " ";
         
        if (temp -> left)
            q.push(temp -> left);
        
        if(temp -> right)
            q.push(temp -> right);
        }
    }
}

int main () {

    Node* root = NULL;

    cout << "Enter data to create BST" << endl;
    takeInput(root);

    cout << "Level order Traversal" << endl;
    levelOrderTraversal(root);
}

// 10 8 21 7 27 5 4 3 -1