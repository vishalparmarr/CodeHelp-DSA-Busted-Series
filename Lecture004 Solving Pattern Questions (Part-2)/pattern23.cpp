/*
1 2 3 4 5 5 4 3 2 1
1 2 3 4 * * 4 3 2 1
1 2 3 * * * * 3 2 1
1 2 * * * * * * 2 1
1 * * * * * * * * 1
*/

#include <iostream>
using namespace std;

int main() {

    int height;
    cin >> height;

    for (int i = 1; i <= height; i++) {
        
        for (int j = 1; j <= (height - i + 1); j++)
            cout << j << " ";
        
        for (int k = 1; k <= (i - 1); k++)
            cout << "* ";
        
        for (int k = (i - 1); k >= 1; k--)
            cout << "* ";
        
        for (int l = (height - i + 1); l >= 1; l--)
            cout << l << " ";
        
        cout << endl;
    }
}