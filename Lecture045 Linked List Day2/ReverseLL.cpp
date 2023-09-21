#include <iostream>
using namespace std;

class Node {

    public:
    Node *next;
    int data;

    Node(int d){
        this -> data = d;
        this -> next = NULL; 
    }
};

void inserthead (Node* &head, int data) {
        
    Node* temp = new Node(data);
        temp -> next = head;
        head = temp;
    }

     void print(Node* &head){
        
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << endl;
            temp = temp ->next;
        }
    }

int main() {

    Node* node1 = new Node(10);     //created a node
    Node* head = node1;             //head point to node 1
    print(head);
    inserthead(head, 15);
    print(head);

}