/*
    * * * *
    * * *
    * *
    *        
*/

#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int i = n;

    while (i >= n) {

        int j = 1;

        while (j <= i) {

            cout << "* ";
            j++;
        }

        cout << endl;
        i--;
    }
}