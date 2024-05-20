// Number of Set bits

#include <iostream>
#include <math.h>
using namespace std;

int count(int n) {

    int count = 0;

   for(int i = 31; i >= 0; i--) {

        if((1LL << i) & n) 
            count++;
    }
    return count;
}

int main() {

    int a, b;
    cin >> a >> b;

    int num1 = count(a);
    int num2 = count(b);

    cout << num1 + num2;
}