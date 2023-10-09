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
    cout << "Enter the data = " << endl;
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

void levelOrderTraversal (node *root) {

    queue <node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {

        node* temp = q.front();
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

int main() {

    node *root = NULL;

    //creating a tree
    root = buildTree(root);

    // Printing in order
    cout << endl;
    cout << "Level Order Traversal :-" << endl;
    levelOrderTraversal(root);

}

//1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1