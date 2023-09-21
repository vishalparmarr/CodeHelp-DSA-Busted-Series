// Reverse Doubly Linkded List

#include <iostream>
using namespace std;

class Node {

    public:
        int data;
        Node *next,*prev;

    Node() {
        this->data = 0;
        next = NULL;
        prev= NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
        this->prev= NULL;
    }
    Node(int data, Node* next, Node *prev)
    {
        this->data = data;
        this->next = next;
        this->prev= prev;
    }
};

void insertAtTail(Node* &tail, int d) {
    if(tail == NULL) {
        Node* temp = new Node(d);
        tail = temp;
    }
    else{
        Node* temp = new Node(d);
        tail -> next  = temp;
        temp -> prev = tail;
        tail = temp;
    }
}

Node* reverseDLL(Node* &head) {

    Node* forward = NULL;
    Node* curr = head;

    while (curr != NULL) {
        forward = curr -> next;
        curr -> next = curr -> prev;
        curr -> prev = forward;
        head = curr;
        curr = forward;
    }
    return head;
}

void print(Node* &head) {
    Node* temp = head;

    while(temp != NULL ) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main() {

    Node* node1 = new Node(1);
    Node* tail = node1;
    Node(2, node1->next, node1->prev);
    Node(3, node1->next, node1->prev);
    Node(4, node1->next, node1->prev);

    insertAtTail(tail, 11);
    print(tail);

    reverseDLL(node1);
    print(node1);
}

