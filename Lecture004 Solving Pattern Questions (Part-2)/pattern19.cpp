/*
 1111
  222
   33
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

        int col = n;
        while (col >= row) {
            cout << row ;
            col--;
        }
        cout << endl;
        row++;
    }
}