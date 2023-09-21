#include <iostream>
#include <stack>
using namespace std;

void stacks(stack<int> s){
    
    while(!s.empty()){
        cout << s.top() << endl;
        s.pop();
    }
}

int main () {

    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);

    stacks(s);

    cout << "Top element = " << s.top() << endl;

    s.pop();

    cout << "Top element = " << s.top() << endl;

    cout << "Is empty = " << s.empty() << endl;
}