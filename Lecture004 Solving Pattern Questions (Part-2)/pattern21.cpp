/*
  1234
   234
    34
     4
*/

#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int row = 1;
    while(row <= n) {

        int space = 1;
        while (space <= row) {
            cout << " ";
            space++;
        }
        int number = row;
        int col = n;
        while (col >= row) {
            cout << number;
            number++;
            col--;
        }
        cout << endl;
        row++;
    }
}