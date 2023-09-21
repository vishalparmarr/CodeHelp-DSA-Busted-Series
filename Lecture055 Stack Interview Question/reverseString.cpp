#include <iostream>
#include <stack>
using namespace std;

int main () {

    string name = "Vishal";
    stack<char> s;

    for (int i = 0; i < name.length(); i++){
        char ch = name[i];
        s.push(ch);
    }

    while(!s.empty()){
        cout << s.top();
        s.pop();
    }
}