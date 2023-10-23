#include <iostream>
#include <queue>
using namespace std;

int main () {

    //max-heap
    priority_queue <int> pq;
    pq.push(4);
    pq.push(3);
    pq.push(2);
    pq.push(5);
    cout << "Root node = " << pq.top() << endl;
    
    pq.pop();
    cout << "Root node = " << pq.top() << endl;

    cout << "Size of heap = " << pq.size() << endl;

    if(pq.empty())
        cout << "Heap is empty" << endl;
    else
        cout << "Heap is not empty" << endl;

    //min-heap
    priority_queue <int, vector <int>, greater<int> > min;
    min.push(4);
    min.push(3);
    min.push(2);
    min.push(5);
    cout << "Root node = " << min.top() << endl;
    
    min.pop();
    cout << "Root node = " << min.top() << endl;

    cout << "Size of heap = " << min.size() << endl;

    if(min.empty())
        cout << "Heap is empty" << endl;
    else
        cout << "Heap is not empty" << endl;
}