#include <iostream>
#include <queue>
using namespace std;

int main() {

    cout << endl;
    
    deque <int> d1;

    d1.push_front(10);
    d1.push_back(14);

    cout << "Front element = " << d1.front() << endl;
    cout << "Last element = " << d1.back() << endl;

    d1.pop_front();

    cout << "Front element = " << d1.front() << endl;
    cout << "Last element = " << d1.back() << endl;

    d1.pop_front();

    if(d1.empty())
        cout << "Queue is empty" << endl;

    else
        cout << "Queue is not empty" << endl;

    cout << endl;

}