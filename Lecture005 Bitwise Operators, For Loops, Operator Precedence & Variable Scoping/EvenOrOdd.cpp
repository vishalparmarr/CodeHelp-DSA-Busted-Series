#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter a number = ";
    cin >> n;

    if ((n & 1) == 1)
        cout << "The number is odd";
    else
        cout << "The number is even";

}