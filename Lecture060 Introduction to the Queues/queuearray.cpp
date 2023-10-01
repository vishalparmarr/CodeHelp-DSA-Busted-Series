#include <iostream>
using namespace std;

class Queue{

    // Declaring data member 
    private:
    int fronts, rear;
    int *arr;
    int size;

    // functions
    public:

    Queue(int s){

        this -> size = s;
        fronts = -1;
        arr = new int[size];
        rear = -1;
    }

    bool isEmpty() {
        
        if(fronts == -1 || fronts > rear)
            return true;
        else
            return false;
    }

    void enqueue(int data) {
        
        if(fronts == -1)
           fronts++;
        
            rear++;
            arr[rear] = data;
        
    }

    int dequeue() {
        
        if(fronts > rear || rear == -1) 
            return -1;
        else
            return arr[fronts++];
    }

    int front() {
        
        if(fronts > rear || rear == -1)
            return -1;
        else
            return arr[fronts];
    }

    void display (Queue q1){

        while(!q1.isEmpty()){
            cout << q1.front() << " ";
            q1.dequeue();
        }
    }
};

int main() {

    Queue q1(4);
    
    cout << "Queue is empty = " << q1.isEmpty() << endl;

    q1.enqueue(10);
    q1.enqueue(20);
    q1.enqueue(30);
    q1.enqueue(40);
    
    q1.display(q1);

    q1.dequeue();
}