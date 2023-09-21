#include <iostream>
using namespace std;

class Stack{

    // Declaring data member 
    private:
    int top;
    int *arr;
    int size;

    // functions
    public:

    Stack(int s){

        this -> size = s;
        top = -1;
        arr = new int[size];
    }

    void push (int data){

        if (top == size - 1)
            cout << "Stack is Overflow" << endl;
        
        else{
            top++;
            arr[top] = data;
        }
    }

    void pop () {

        if (top == -1)
            cout << "Stack is Underflow" << endl;

        else
            top--;
    }

    int peak() {

        if (top == -1){
            cout << "Stack is Underflow" << endl;
            return -1;
        }
        else
            return arr[top];
    }

    bool isEmpty (){
        
        if (top == -1)
            return true;
        
        else
            return false;
    }

    void display (Stack s){
        
        while(!s.isEmpty()){
            cout << s.peak() << " " << endl;
            s.pop();
        }
    }
};

int main() {

    Stack s1(4);
    
    cout << "Stack is empty = " << s1.isEmpty() << endl;

    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
  
    cout << "Top element = " << s1.peak() << endl;
    s1.display(s1);

    s1.pop();
    cout << "Top element = " << s1.peak() << endl;

}