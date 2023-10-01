#include <iostream>
#include <queue>
using namespace std;

int main() {

    cout << endl;

    queue <int> q;

    q.push(1);
    q.push(5);
    q.push(7);
    q.push(11);

    cout << "Rear of Queue = " << q.back() << endl;

    cout << "Size of queue = " << q.size() << endl;  // 4

    q.pop();

    cout << "Front of Queue = " << q.front() << endl;   // 5

    cout << "Size of queue = " << q.size() << endl;   // 3

    if(q.empty())
        cout << "Queue is empty" << endl;
    else
        cout << "Queue is not empty" << endl;

    q.pop();
    q.pop();
    q.pop();

    cout << "Size of queue = " << q.size() << endl;
    
    if(q.empty())
        cout << "Queue is empty" << endl;
    else
        cout << "Queue is not empty" << endl;

    cout << endl;
}