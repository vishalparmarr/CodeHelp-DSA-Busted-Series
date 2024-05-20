//All element of array set to 1

#include <iostream>
using namespace std;

int main() {
    int n[5];

    fill_n(n,5,1);   //fill_n property is used to store same element in all position

    for(int i = 0; i < 5; i++)
        cout << n[i] << " ";
}