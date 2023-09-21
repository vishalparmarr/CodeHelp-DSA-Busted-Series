#include <bits/stdc++.h>
using namespace std;

template <typename T>

class LinkedListNode {
    public:

        LinkedListNode<int> *next;
        int data;
        LinkedListNode(int data) {
            this->data = data;
            this->next = NULL;
        }
    };

void recursion(LinkedListNode<int>* &head, LinkedListNode<int>* curr, LinkedListNode<int>* prev) {

    //base condition
    if (curr == NULL) {
    head = prev;
      return;
    } 

    //recurence relation
      LinkedListNode<int>* forward = curr->next;
      curr->next = prev;
        
    //recursion
    recursion(head, forward, curr);
}


LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{

    if(head == NULL || head -> next == NULL){
        return head;
    }

    LinkedListNode<int>* prev = NULL;
    LinkedListNode<int>* curr = head;

    recursion(head,curr,prev);
    return head;
}

int main() {
    LinkedListNode* node1 = new LinkedListNode(10);
}