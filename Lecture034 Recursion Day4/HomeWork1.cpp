#include <bits/stdc++.h>
using namespace std;

void reverse (string &str, int i) {
         
    int size = str.size() - 1 - i;

    if(i > size)
        return;
    
    swap(str[i], str[size]);
    size--;
    i++;

    reverse(str,i); 
}

int main() {

    string str;
    cout << "ENTER A STRING  = ";
    getline(cin,str);

    reverse(str, 0);
    cout << str;
}