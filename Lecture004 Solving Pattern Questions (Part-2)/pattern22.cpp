/*
      1
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1
*/

#include <iostream>
using namespace std;

int main() {

    int height;
    cin >> height;

    for (int i = 1; i <= height; i++) {
        for (int k = 1; k <= (height - i); k++)
            cout << "  ";
        
        for (int j = 1; j <= i; j++)
            cout << j << " ";
        
        for (int l = i - 1; l >= 1; l--)
            cout << l << " ";
        
        cout << endl;
    }
}