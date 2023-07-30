// AP series

#include <iostream>
using namespace std;

int AP(int n){

    int ap = 3 * n + 7;
    return ap; 
}

int main(){

    int n;
    cin >> n;

    cout << "The AP is = " << AP(n);
}