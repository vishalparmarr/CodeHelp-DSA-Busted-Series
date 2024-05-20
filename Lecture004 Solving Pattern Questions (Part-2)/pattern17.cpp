/*
 * * * * *
 * * * *
 * * *
 * *
 *
*/

#include<iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int row = n;

    while(row >= 1) {

        int col = row;
        while( col >= 1) {
            cout<<"* ";
            col = col - 1;
        }
        cout < <endl;
        row = row - 1;
    }
}