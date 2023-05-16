#include <iostream>
using namespace std;

int main() {

    int n;
    bool f = 1;
    cin >> n;

    int i = 2;

    while(i < n) {

        if(n % i == 0)
            f = 0;

        else
            f == 1;

        i++;
    }

    if (f == 0)
        cout << "Not prime Number" << endl;
    
    else
        cout << "Prime Number" << endl;
}